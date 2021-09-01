#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
 
const int MAX = 50;
 
typedef struct node
{
    char data;
    struct node *left, *right;
} node;
 
int push(node *cnode, node *info[], int top)
{
    top = top + 1;
    info[top] = cnode;
    return top;
}
node *Top(node *info[], int top)
{
    return info[top];
}
int empty(int top)
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int pop(node *info[], int top)
{
    if (!empty(top))
    {
        return top;
    }
    return -1;
}
 
int isFull(int top)
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}
 
//==================================================
 
node *root;
 
int priority(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 0;
        break;
    case '*':
    case '/':
        return 1;
        break;
    case '^':
        return 2;
        break;
    }
    return -1;
}
void postorderNon()
{
    node *ptr = root;
 
    node *info[MAX];
    int top = -1;
    int arr[MAX], i = -1, flag;
LOOP:
    while (ptr != NULL)
    {
        top = push(ptr, info, top);
        arr[++i] = 0;
        if (ptr->right != NULL)
        {
            top = push(ptr->right, info, top);
            arr[++i] = 1;
        }
        ptr = ptr->left;
    }
    if (pop(info, top) != -1)
    {
        ptr = info[pop(info, top)];
        top--;
    }
    else
    {
        ptr = NULL;
    }
    flag = arr[i--];
    while (flag == 0 && i >= 0)
    {
        printf(" %c", ptr->data);
        if (pop(info, top) != -1)
        {
            ptr = info[pop(info, top)];
            top--;
        }
        else
        {
            ptr = NULL;
        }
        flag = arr[i--];
    }
    if (flag == 1 && i >= 0)
    {
        goto LOOP;
    }
    printf(" %c", ptr->data);
}
 
void inorder_rec(node *rnode)
{
    if (rnode)
    {
        inorder_rec(rnode->left);
        printf(" %c", rnode->data);
        inorder_rec(rnode->right);
    }
}
 
void create(char str[])
{
    node *info1[MAX];
    int top1 = -1;
    node *info2[MAX];
    int top2 = -1;
    int i = 0;
    char ch;
    while (str[i] != '\0')
    {
        ch = str[i];
        if (isalpha(ch)) 
        {
            node *temp = (node *)malloc(sizeof(node));
            temp->left = NULL;
            temp->right = NULL;
            temp->data = ch;
            top1 = push(temp, info1, top1);
        }
        else 
        {
            if (empty(top2))
            {
                node *temp = (node *)malloc(sizeof(node));
                temp->left = temp->right = NULL;
                temp->data = ch;
                top2 = push(temp, info2, top2);
            }
            else if (priority(ch) > priority(Top(info2, top2)->data))
            {
                node *temp = (node *)malloc(sizeof(node));
                temp->left = temp->right = NULL;
                temp->data = ch;
                top2 = push(temp, info2, top2);
            }
            else
            {
                while (!empty(top2) && priority(ch) <= priority(Top(info2, top2)->data))
                {
                    node *op;
                    node *rchild;
                    node *lchild;
                    if (pop(info2, top2) != -1)
                    {
                        op = info2[pop(info2, top2)];
                        top2--;
                    }
                    else
                    {
                        op = NULL;
                    }
                    if (pop(info1, top1) != -1)
                    {
                        rchild = info1[pop(info1, top1)];
                        top1--;
                    }
                    else
                    {
                        rchild = NULL;
                    }
                    if (pop(info1, top1) != -1)
                    {
                        lchild = info1[pop(info1, top1)];
                        top1--;
                    }
                    else
                    {
                        lchild = NULL;
                    }
 
                    op->right = rchild;
                    op->left = lchild;
 
                    top1 = push(op, info1, top1);
                }
                node *x = (node *)malloc(sizeof(node));
                x->data = ch;
                x->left = x->right = NULL;
                top2 = push(x, info2, top2); 
            }
        }
 
        i++;
    }
    while (!empty(top2)) 
    {
        node *op;
        node *rchild;
        node *lchild;
        if (pop(info2, top2) != -1)
        {
            op = info2[pop(info2, top2)];
            top2--;
        }
        else
        {
            op = NULL;
        }
        if (pop(info1, top1) != -1)
        {
            rchild = info1[pop(info1, top1)];
            top1--;
        }
        else
        {
            rchild = NULL;
        }
        if (pop(info1, top1) != -1)
        {
            lchild = info1[pop(info1, top1)];
            top1--;
        }
        else
        {
            lchild = NULL;
        }
 
        op->right = rchild;
        op->left = lchild;
        top1 = push(op, info1, top1);
    }
 
   
    if (pop(info1, top1) != -1)
    {
        root = info1[pop(info1, top1)];
        top1--;
    }
    else
    {
        root = NULL;
    }
}
 
void inorder()
{
    inorder_rec(root);
}
 
int main()
{
    root = NULL;
    printf("\n"); 
    char exp[] = "a-b*c-d/e+f";
    printf("\nOriginal Expression: %s", exp);
 
    create(exp);
    printf("\nInorder Sequence : ");
    inorder();
    printf("\nPostorder Non-Recursive Travesal From the Inorder Sequence : ");
    postorderNon();
    return 0;
}
