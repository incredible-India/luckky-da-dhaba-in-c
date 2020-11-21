#include<time.h>
void menu(void);
void takeOrder(char givenOrder[])

{
    FILE *p;
    p=fopen("order.dat","a");
    time_t timeTell;
    time(&timeTell);
    fprintf(p,"\n----------------------\n");
    fprintf(p,"%s\n",ctime(&timeTell));
    fprintf(p," Order NO.. %s\n",givenOrder);
    fprintf(p,"\n------------------------\n");
fclose(p);

}
void previousOrder(void)
{
    FILE *readData;
    readData=fopen("order.dat","r");
    if(readData==NULL)
    {
        system("cls");
    gotoxy(40,12);
    printf("File Has Been Deleted");
    getch();
    menu();

    }else
    {
        system("cls");
        gotoxy(75,3);
        setcolor(54);
        printf("D : Delete History");
        char dataReader[1000];
       // fputs(dataReader,9,readData);
        while(fgets(dataReader,9,readData)!=NULL)
        {
            printf("%s",dataReader);

        }
       fclose(readData);
    }
    {

        char Urchoice;
        Urchoice=getch();
        if(Urchoice=='d'||Urchoice=='D')
        {
            int k;
            k=remove("order.dat");
            if(k==0)
            {
                system("cls");
                             gotoxy(40,12);
                printf("Order History Deleted Successfully");
                getch();
                menu();

            }
            else{
                  system("cls");
                  gotoxy(40,12);
                printf("Error 404 File Not  Found ");
                getch();
                menu();
            }
        }
    }
    getch();
    menu();
}
