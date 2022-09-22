#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include"fonction1.h"
int main()
{   
   int opt; 
    printf("\t\tHOSPITAL MANAGEMENT SYSTEM");
    printf("\t\t***********************\n\t\t***********************\n\t\t***********************");
    printf("\t\t**Enter your choice");
    printf("\t\t1.Add information:");
    printf("\t\t2.View information:");
    printf("\t\t3.Search:");
    printf("\t\t4.Edit information:");
    printf("\t\t5.Exit");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        {   
            system("cls");
            fonction1();
            break;
        }
        case 2:

            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;


    }
    return 0;
}