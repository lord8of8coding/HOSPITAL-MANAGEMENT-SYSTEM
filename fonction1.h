#ifndef FONCTION1_H_INCLUDED
#define FONCTION1_H_INCLUDED

void fonction1()
{  char pname[100],disease[100];
   int entries,age,cabin_no,phone,choice;
    FILE* fichier = NULL;
    fichier = fopen("patients", "w");

    printf("\t\tHow many entry do you want to add ?");
    scanf("%d",&entries);

    printf("\tEnter patient's name:");
    scanf("%s",pname);
    fprintf(fichier, "patient's name : %s\n",pname);

    printf("\tEnter patient's disease:");
    scanf("%s",disease);
    fprintf(fichier, "patient's disease : %s\n",disease);

    printf("\tEnter the age:");
    scanf("%d",&age);
    fprintf(fichier, "age : %d\n",age);

    printf("\tEnter cabin no:");
    scanf("%d",&cabin_no);
    fprintf(fichier, "cabin number : %d\n",cabin_no);

    printf("\tEnter phone number:");
    scanf("%d",&phone);
    fprintf(fichier, "full name : %d\n",phone);


    fclose(fichier);
    printf("\n\n");
    printf("\tEnter 1 to go to the main menu or 0 to exit:");
    scanf("%d",&choice);

    if(choice==0)
        system("exit");
    else
        {   system("cls");
            main();
        }
}
#endif
