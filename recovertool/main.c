/*
 * CS551: Project 2: Message ordered MCast IPCs
 * TEAM: Group 7: Sowmya, Kavya, Harmeet
 * main.c  --> Main file to define the framework
*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
int myls(char *pname);
void clearmystats(void);
void printmystats(int detail);

int main()
{
    int choice, i, j;
    char name[256];

#if 0
    {
        int error;
        toolfs_act_type action;
        char pathname[MYNAME_MAX]="/home/hsingh/tmp";

        action = TOOLFS_READINODE_TABLE;
        error = toolfs((const char *) &pathname[0], action);
        printf("\n Return toolfs = %d\n",error);
        recover();
        exit(0);   
    }   
#endif

    do
    {
        printf("\n 1. List Folder/Directory Details");
        printf("\n 2. List Current INODE Table Details");
        printf("\n 3. Damage a Folder while deleting a file ");
        printf("\n 4. Fix/Undelete Folder/Directory");
        printf("\n 5. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            printf("***** Enter Path (relative or absolute) ***** ");
            do
            {
                printf("\nEnter Path Name : ");
                scanf("%s", name);
                printf("\n name=%s\n",name);
                //checkpathname(name);
                clearmystats(); 
                myls(&name[0]);
                printmystats(1); 
            }
            while (0);
            break;
            
            case 2:
            printf("***** Enter Path (relative or absolute) ***** ");
            do
            {
                printf("\nEnter Path Name : ");
                scanf("%s", name);

                //checkpathname(name);
                //myls(&name[0]);
                checkdir(name);
            }
            while (0);
            break;
            
            case 3:
            printf("***** Enter File name with Path (relative or absolute) ***** ");
            do
            {
                scanf("%s", name);

                //checkpathname(name);
                myls(&name[0]);
            }
            while (0);
            break;
            
            case 4:
            printf("***** Enter Path (relative or absolute) ***** ");
            do
            {
                printf("\nEnter Path Name : ");
                scanf("%s", name);

                //checkpathname(name);
                myls(&name[0]);
            }
            while (0);
            break;
        }
    }
    while (choice != 5)
    ;
   
    printf("\n Exiting gracefully\n");
}
