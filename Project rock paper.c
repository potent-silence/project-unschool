#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char uchoice[10];
    int num,val_ro,val_pa,val_sc,val,qu;
    while(1)
    {
        printf("\nPlease choose rock, paper, scissors or quit : ");
        gets(uchoice);
        printf("Your choice: %s",uchoice);
        srand(time(0));
        num=rand() % 3 + 1;
        val_ro =strcmp(uchoice,"rock");
        val_pa =strcmp(uchoice,"paper");
        val_sc =strcmp(uchoice,"scissors");
        qu=strcmp(uchoice,"quit");
        if(val_ro==0 || val_pa==0 || val_sc==0)
        {
        if(num==1)
        {
            printf("\nComputer chose: Rock");
        }
        else if(num==2)
        {
            printf("\nComputer chose: Paper");
        }
        else
        {
            printf("\nComputer chose: Scissors");
        }
        }

       if(num==1 && val_ro==0)
       {
           printf("\nTie");
       }
       else if(num==1 && val_pa==0)
       {
           printf("\nUser wins");
       }
       else if(num==1 && val_sc==0)
       {
           printf("\nComputer wins ");
       }
       else if(num==2 && val_pa==0)
       {
           printf("\nTie");
       }
       else if(num==2 && val_ro==0)
       {
           printf("\nComputer wins ");
       }
       else if(num==2 && val_sc==0)
       {
           printf("\nUser wins");
       }
       else if(num==3 && val_pa==0)
       {
           printf("\nComputer wins ");
       }
       else if(num==3 && val_sc==0)
       {
           printf("\nTie");
       }
       else if(num==3 && val_ro==0)
       {
           printf("\nUser wins");
       }
       else if(qu==0)
       {
           break;
       }
       else
       {
           printf("\nInvalid Response from user");
       }
       printf("\n");

    }
        return 0;
    }

