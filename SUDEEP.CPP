#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
 void main()
 {
   clrscr();

   char str[20],ans[10];
   cout<<"What is your Name?";
   gets(str);
   puts(str);
   cout<<"Is that Sudeep's girlfriend? ";
   gets(ans);
   if(strcmp(ans,"yes")==0)
   cout<<" what you doin with his gf bruh?";
   else
   cout<<" you liar ";
  getch();
 }