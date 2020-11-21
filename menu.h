void mdbox(int,int,int,char);
void mhbox(int,int,int ,char);
void OrderAccepted(char []);///it will show the order pop-up window..
void mvbox(int,int,int ,char);
int  makeFoodBox1(void);
int makeFoodBox(void);
void gotoxy(int,int);
void close(void);/// this function will execute when User wants to exit..
void setcolor(int);
void  previousOrder(void);///shoe all the given order..
void takeOrder(char []);///for the file Handling in  given order..



void menu(void)
{

    void food_Menu(void);///show the list of the food here..
extern int i,j;
read_again:
system("cls");
setcolor(125);
mdbox(10,20,9,'*');
mdbox(11,21,9,'*');
mdbox(12,22,9,'*');
mdbox(13,23,9,'*');

gotoxy(25,12);
setcolor(46);
printf("1: Menu Card");
gotoxy(25,14);
setcolor(102);
printf("2: Previous Orders");
setcolor(105);
gotoxy(25,16);
printf("3: exit");

{
    char ch;
    ch=getch();
    if(ch=='1')
    {
        food_Menu();

    }else if(ch=='2')
    {

       previousOrder();

    }else if(ch=='3')
    {
        close();

    }else{

    printf("\a");
    goto read_again;
    }

}




}

void food_Menu(void)
{
    extern int i;
     int foodReturn,foodReturn1;

   makeFoodBox();///it will show menu card in order ..


}
int  makeFoodBox(void)
{
    extern int i;
read_Again1:
        system("cls");
    gotoxy(44,2);
    setcolor(123);
    printf("...Lucky DA Dhaba...");
    setcolor(105);
    mhbox(15,95,3,'-');
    mhbox(15,95,27,'-');
    mhbox(15,95,23,'-');
    mvbox(4,27,15,'-');
    mvbox(4,27,95,'-');

    gotoxy(16,24);
    setcolor(130);
    printf("Your Order.. (give comma \",\" for more food order)");

  gotoxy(17,28);
  setcolor(127);
  printf("N : Next ");

    gotoxy(85,28);
  setcolor(129);
  printf("E : Exit ");



    setcolor(102);
    gotoxy(17,5);
    printf("1 : Dosa");
      gotoxy(17,7);
    printf("2 : Idly");
      gotoxy(17,9);
    printf("3 : Lassi");
      gotoxy(17,11);
    printf("4 : Cold-drinks");
      gotoxy(17,13);
    printf("5 : Paratha");
      gotoxy(17,15);
    printf("6 : Paneer-Paratha");
      gotoxy(17,17);
    printf("7 : Chicken-Curry");
  gotoxy(17,19);
    printf("8 : Egg-curry");
      gotoxy(17,21);
    printf("9 : Paneer-Butter ");
    {
    char OrderFood[100];
  gotoxy(16,25);
    setcolor(130);
    gets(OrderFood);
    if(OrderFood[0]=='n'||OrderFood[0]=='N')
    {
      makeFoodBox1();
    }
       else if(OrderFood[0]=='e'||OrderFood[0]=='E')
    {

        close();
    }else if(OrderFood[0]!='e'||OrderFood[0]!='p'||OrderFood[0]!='E'||OrderFood[0]!='P')
    {
       OrderAccepted(OrderFood);

    }
    else
    {
        printf("\a");
        goto read_Again1;
    }



}
}

int  makeFoodBox1(void)
{
  extern int j;
  read_Again2:
        system("cls");
    gotoxy(44,2);
    setcolor(123);
    printf("...Lucky DA Dhaba...");
    setcolor(105);
    mhbox(15,95,3,'-');
    mhbox(15,95,27,'-');
    mhbox(15,95,23,'-');
    mvbox(4,27,15,'-');
    mvbox(4,27,95,'-');

    gotoxy(16,24);
    setcolor(130);
    printf("Your Order.. (give comma \",\" for more food order)");

  gotoxy(17,28);
  setcolor(127);
  printf("P : Previous ");

      gotoxy(85,28);
  setcolor(129);
   printf("E : Exit ");


    setcolor(103);
    gotoxy(17,5);
    printf("10 : Thali");
      gotoxy(17,7);
    printf("11 : special Thali");
      gotoxy(17,9);
    printf("12 : Fish-curry");
      gotoxy(17,11);
    printf("13 : Meat");
      gotoxy(17,13);
    printf("14 : Rost-chicken");
      gotoxy(17,15);
    printf("15 : Mix-Veg");
      gotoxy(17,17);
    printf("16 : Aloo Ghobhi");
  gotoxy(17,19);
    printf("17 : Fried Rice");
      gotoxy(17,21);
    printf("18 : Mix-Thali ");
    {
    char OrderFood[100];
  gotoxy(16,25);
    setcolor(130);
    gets(OrderFood);
    if(OrderFood[0]=='p'||OrderFood[0]=='P')
    {
        makeFoodBox();
    }
    else if(OrderFood[0]=='e'||OrderFood[0]=='E')
    {

        close();
    }else if(OrderFood[0]!='e'||OrderFood[0]!='p'||OrderFood[0]!='E'||OrderFood[0]!='P')
    {
       OrderAccepted(OrderFood);

    }
    else
    {
        printf("\n");
        goto read_Again2;

    }


}
}

void OrderAccepted(char ch[])
{
    extern int i;
    read_Again3:
    system("cls");
    setcolor(163);
    mhbox(20,60,12,'`');
    mhbox(20,60,20,'`');
    mvbox(12,19,20,'`');
    mvbox(12,19,60,'`');
        setcolor(53);
mdbox(65,75,12,'*');
mdbox(66,76,12,'*');
mdbox(67,77,12,'*');
mdbox(68,78,12,'*');
mdbox(69,79,12,'*');
mdbox(70,80,12,'*');
mdbox(71,81,12,'*');

        setcolor(56);
mdbox(75,85,12,'*');
mdbox(76,86,12,'*');
mdbox(77,87,12,'*');
mdbox(78,88,12,'*');
mdbox(79,89,12,'*');
mdbox(80,90,12,'*');
mdbox(81,91,12,'*');



    setcolor(131);
    gotoxy(30,14);
    printf("...Lucky DA Dhabha...");

    setcolor(124);
    gotoxy(30,16);
    printf("Order no.. %s",ch);

    gotoxy(25,18);
    setcolor(75);
    printf("Your Order Has Been Accepted");

    takeOrder(ch);///it will take order and copy in order.dat formate type file..

    gotoxy(5,2);
    setcolor(70);
    printf("E : Exit");


    gotoxy(75,2);
    setcolor(49);
    printf("M : Main Menu");

    {
        char choice;
        choice=getch();
        switch(choice)
        {
        case 'e':
            close();
            break;
        case 'E':
            close();
            break;
        case 'm':
            menu();
            break;
        case 'M':
            menu();
            break;

        default:

            printf("\a");
            goto read_Again3;
            break;



        }
    }


}
