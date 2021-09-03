#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 
#include <stdbool.h> 
void main()
{
 char* encDec [27][2] =      // Morse array contains all the letters from A to Z and the resp. Morse Codes 
    {

        { "A", ".-" },
        { "B", "-..." }, 
        { "C", "-.-." }, 
        { "D", "-.." }, 
        { "E", "." },
        { "F", "..-." },
        { "G", "--." }, 
        { "H", "...." },
        {"I", ".." },          
        {  "J", ".---"  },
        {  "K", "-.-"  },
        {  "L", ".-.."  },
        {  "M", "--"  },
        {  "N", "-."  },
        {  "O", "---"  },
        {  "P", ".--."  },
        {  "Q", "--.-"  },
        {  "R", ".-."  },
        {  "S", "..."  },
        {  "T", "-"  },
        {  "U", "..-"  },
        {  "V", "...-"  },
        {  "W", ".--"  },
        {  "X", "-..-"  },
        {  "Y", "-.--"  },
        {  "Z", "--.."  },
        {  " ", "$$"  },
           
    }
        

        char option:
        char input[10];
        char output[10];
        bool condition= true;



        for(;condition==true;)
        {
        	option=menu();
        	switch(option)
        	{
        		case'E':
        		 input=getinput();



        	}
        }


           
    }
    char menu(void)
    {
    	char option; 
        bool validData; 

     
    printf("\t\t\tM E N U \n"); 
    printf("\t\tE) ENCODE \n");
    printf("\t\tD) DECODE \n"); 
    printf("\t\tQ) QUIT \n"); 
 
    for(;getchar() != '\n';) 
    {    
        printf ("\nEnter ANY option: "); 
        option = toupper (getchar()); 
        for(;getchar() != '\n';)
        if (option == 'E' || option == 'D' || option == 'Q') 
        validData = true;
        else 
        { 
            validData = false; 
            printf("\aEnter only one option!\n"); 
            printf(" \tE, D, or Q\n "); 
        } 
    }

return option

    }

    char getinput(void)
    {

    }





}