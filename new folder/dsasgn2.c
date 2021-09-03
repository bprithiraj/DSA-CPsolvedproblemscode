#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct node
{
    char name[20];
    struct node *next;
    struct node *down;
    int flag;
} node;
char ch[20];
int n, i;
node *head = NULL;
node *temp = NULL;
node *t1 = NULL;
node *t2 = NULL;
node *create()
{
    node *p = (node *)malloc(sizeof(node));
    p->next = NULL;
    p->down = NULL;
    p->flag = 0;
    printf("\n Enter the name : ");
    fflush(stdin);
    scanf("%[^\n]", p->name);
    return p;
}
void insertb()
{
 
    if (head == NULL)
    {
        t1 = create();
        head = t1;
    }
    else
    {
        printf("\n Book exist.\n ");
    }
}
void insertc()
{
    if (head == NULL)
    {
        printf("\n There is no book.\n ");
    }
    else
    {
        printf("\n How many chapters you want to insert : ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            t1 = create();
            if (head->flag == 0)
            {
                head->down = t1;
                head->flag = 1;
            }
            else
            {
                temp = head;
                temp = temp->down;
                while (temp->next != NULL)
                    temp = temp->next;
                temp->next = t1;
            }
        }
    }
}
void inserts()
{
 
    if (head == NULL)
    {
        printf("\n There is no book.\n ");
    }
    else
    {
        printf("\n Enter the name of chapter on which  you want to enter the section : ");
        fflush(stdin);
        scanf("%[^\n]", ch);
 
        temp = head;
        if (temp->flag == 0)
        {
            printf("\n Their are no chapters on in book.\n ");
        }
        else
        {
            temp = temp->down;
            while (temp != NULL)
            {
                if (!strcmp(ch, temp->name))
                {
                    printf("\n How many sections you want to enter : ");
                    scanf("%d", &n);
                    for (i = 0; i < n; i++)
                    {
 
                        t1 = create();
                        if (temp->flag == 0)
                        {
                            temp->down = t1;
 
                            temp->flag = 1;
                            printf("\n******");
                            t2 = temp->down;
                        }
                        else
                        {
                            printf("\n#####");
                            while (t2->next != NULL)
                            {
                                t2 = t2->next;
                            }
                            t2->next = t1;
                        }
                    }
                    break;
                }
                temp = temp->next;
            }
        }
    }
}
void insertss()
{
 
    if (head == NULL)
    {
        printf("\n There is no book.\n ");
    }
    else
    {
        printf("\n Enter the name of chapter on which  you want to enter the section : ");
        fflush(stdin);
        scanf("%[^\n]", ch);
 
        temp = head;
        if (temp->flag == 0)
        {
            printf("\n their are no chapters on in book.\n ");
        }
        else
        {
            temp = temp->down;
            while (temp != NULL)
            {
                if (!strcmp(ch, temp->name))
                {
                    printf("\n Enter name of section in which you want to enter the sub section : ");
                    fflush(stdin);
                    scanf("%[^\n]", ch);
 
                    if (temp->flag == 0)
                    {
                        printf("\n Their are no sections.\n ");
                    }
                    else
                    {
                        temp = temp->down;
                        while (temp != NULL)
                        {
                            if (!strcmp(ch, temp->name))
                            {
                                printf("\n How many subsections you want to enter : ");
                                scanf("%d", &n);
                                for (i = 0; i < n; i++)
                                {
 
                                    t1 = create();
                                    if (temp->flag == 0)
                                    {
                                        temp->down = t1;
 
                                        temp->flag = 1;
                                        printf("\n******");
                                        t2 = temp->down;
                                    }
                                    else
                                    {
                                        printf("\n#####");
                                        while (t2->next != NULL)
                                        {
                                            t2 = t2->next;
                                        }
                                        t2->next = t1;
                                    }
                                }
                                break;
                            }
                            temp = temp->next;
                        }
                    }
                }
 
                temp = temp->next;
            }
        }
    }
}
void displayb()
{
 
    if (head == NULL)
    {
        printf("\n Book not exist.\n ");
    }
    else
    {
        temp = head;
 
        printf("\n NAME OF BOOK:  %s", temp->name);
        if (temp->flag == 1)
        {
            temp = temp->down;
 
            while (temp != NULL)
            {
                printf("\n\t\tNAME OF CHAPTER:  %s", temp->name);
                t1 = temp;
                if (t1->flag == 1)
                {
                    t1 = t1->down;
                    while (t1 != NULL)
                    {
                        printf("\n\t\t\t\tNAME OF SECTION:  %s", t1->name);
                        t2 = t1;
                        if (t2->flag == 1)
                        {
                            t2 = t2->down;
                            while (t2 != NULL)
                            {
                                printf("\n\t\t\t\t\t\tNAME OF SUBSECTION:  %s", t2->name);
                                t2 = t2->next;
                            }
                        }
                        t1 = t1->next;
                    }
                }
                temp = temp->next;
            }
        }
    }
}
int main()
{
    int x;
    while (1)
    {
        printf("\n\n ENTER YOUR CHOICE.\n");
        printf("\n 1.INSERT BOOK.\n");
        printf("\n 2.INSERT CHAPTER.\n");
        printf("\n 3.INSERT SECTION.\n");
        printf("\n 4.INSERT SUBSECTION.\n");
        printf("\n 5.DISPLAY BOOK.\n");
        printf("\n 6.EXIT.\n ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            insertb();
            break;
        case 2:
            insertc();
            break;
        case 3:
            inserts();
            break;
        case 4:
            insertss();
            break;
        case 5:
            displayb();
            break;
        case 6:
            exit(0);
        }
    }
    return 0;
}

