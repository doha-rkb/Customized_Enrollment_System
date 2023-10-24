#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <process.h>
#include <conio.h>
#ifndef TEMP_H
#define TEMP_H
void gotoxy(int x,int y){
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int temp(void){
    time_t t;
    time(&t);
    printf("\t\t\t\t LE :: %s ",ctime(&t));
    return 0;
}
void chrono(){
  int r,q;
  gotoxy(10,14);
    printf("\t\t\t\tChargement ...\n");
  gotoxy(10,16);
  printf("\t\t");
  for ( r = 1; r <= 50; r++)
  {
    for(q = 0;q<20000000;q++);
    printf("%c",177);
  }
   printf("\n\n");
}
/*
void chrono(){
    int i = 0, j=0;
  for ( i = 0; i < 100; i++)
  {
    Sleep(10);
    printf("\r");
    printf(":->");
    for ( j = 1; j<=i; j++)
    {
        printf(".");
    }

  }
  printf("\n");
}
*/
void Fin(){
    int i = 0,j = 0;
    for ( i = 0; i < 100; i++)
    {
      Sleep(10);
      printf("\r");printf(":-<");
      for(j = 1;j<=i ; j++){printf(".");}
    }
    printf("\n");
}

#endif
