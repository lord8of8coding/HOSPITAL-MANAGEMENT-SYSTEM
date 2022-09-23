#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include"fonction1.h"
int main()
{
   int opt;
    printf("\n\n\t\tHOSPITAL MANAGEMENT SYSTEM");
    printf("\n\t\t***********************\n\t\t***********************\n\t\t***********************\n\n");
    printf("\t\tEnter your choice\n");
    printf("\t\t1.Add information:\n");
    printf("\t\t2.View information:\n");
    printf("\t\t3.Search:\n");
    printf("\t\t4.Edit information:\n");
    printf("\t\t5.Exit\n");
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
