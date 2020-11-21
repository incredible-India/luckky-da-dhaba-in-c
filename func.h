

void gotoxy(int,int);///this for the co ordinate system...
void setcolor(int);///for changing the color...(fonts only)
void mhbox(int,int,int,char);///make horizontal box...
void mvbox(int,int,int,char);///make Vertical box...
void mdbox(int,int,int,char);///make the diagonal lines..

int i  ,j;///global declaration of the variable....mainly used in loops..
void gotoxy(int a,int b)

{

    COORD x;
    x.X=a;
    x.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);



}

void setcolor(int ForgC)
{
     WORD wColor;


     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

void mhbox(int a,int b,int c,char d)
{

    extern int i;
    for(i=a;i<=b;i++)
    {
        gotoxy(i,c);
        printf("%c",d);

    }


}
void mvbox(int a,int b,int c,char d)
{

    extern int i;
    for(i=a;i<=b;i++)
    {
        gotoxy(c,i);
        printf("%c",d);

    }


}
void mdbox(int a,int b, int c,char ch)
{
   extern int i,j;
   for(i=a;i<=b;i++)
   {
       gotoxy(i,c);
       {

           printf("%c",ch);
           ++c;
       }



   }

}

void close(void)
{
    system("cls");
    gotoxy(40,12);
    printf("Thanx for Visiting US..");
    getch();
    exit(0);



}
