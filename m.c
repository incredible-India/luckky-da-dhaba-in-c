#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include"menu.h"
#include"func.h"
#include"fileHandling.h"
#include<time.h>

void welcome(void);
void gotoxy(int,int);
void mhbox(int,int,int,char);
void setcolor(int);
void menu(void);

void gotoxy(int,int);///this for the co ordinate system...
void setcolor(int);///for changing the color...(fonts only)
void mhbox(int,int,int,char);///make horizontal box...
void mvbox(int,int,int,char);///make Vertical box...




int main()
{
  void (*p)(void);///function pointer declare here..no need for that ...we can directly call the welcome function..
  p=welcome;
  p();///welcome menu will be shown here
  menu();///welcome menu it will shown to you...
  getch();
}


  void welcome(void)
  {

          char name[]="LUCKY * DA * DHABHA",sname[]="WELCOME TO ",quto[]="MEALS ON WHEELS";
  extern int i ;
  gotoxy(20,9);
  for(i=0;i<=strlen(name);i++)
  {
       setcolor(101+i);
      Sleep(190);
      printf("%c ",name[i]);
  }
  gotoxy(30,6);

  for(i=0;i<=strlen(sname);i++)
  {
       setcolor(103);

      printf("%c ",sname[i]);
  }
  mhbox(30,48,7,'-');

  gotoxy(65,21);
  fflush(stdin);
  for(i=0;i<=strlen(quto);i++)
  { setcolor(104+i);
      printf("%c ",quto[i]);
  }
   mhbox(0,104,22,'-');
   mhbox(2,12,25,'>');
   mhbox(17,27,25,'>');
   mhbox(32,42,25,'>');
   mhbox(47,57,25,'>');
   mhbox(62,72,25,'>');
   mhbox(77,87,25,'>');
   mhbox(92,102,25,'>');



   mhbox(0,104,28,'-');
getch();
  }
