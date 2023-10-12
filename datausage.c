#include<stdio.h>
int main(){


// Made by : Murtaza Tanveer
//Reg No   : SP23-BSE-096-2C


printf("\nMade by : MURTAZA TANVEER\nReg no  : SP23-BSE-096-2C");
printf("\n\n____________________WELCOME TO MOBILE DATA USAGE TRACKER___________________\n\n\n");

float a;
printf("\n\n Enter number of GBs in the plan per 30 day period : ");
scanf("%f",&a);

float b;
printf("\n\n The current day in the 30 day period : ");
scanf("%f",&b);

float c;
printf("\n\n The total number of GBs used so far : ");
scanf("%f",&c);

float g=a/30;
float rd=a-c;

float avg= c/b;

float f=a/30;
float j=30-b;

printf("\n\n-----CURRENT STATUS------\n\n\n Current Day : %.1f\n\n Total Data : %.2f GBs\n\n Data Usage Average : %.2f GBs Per Day \n\n\n",b,a,g);

printf("------YOUR STATUS-------\n\n\n Data Used : %.2f GBs\n\n Remaning Data : %.2f GBs\n\n Remaning Days : %.1f Days\n\n Your Data Usage Average of %.1f Days : %.2f GBs Per Day\n\n\n",c,rd,j,b,avg);


if(avg>g){
    
float h=avg*30;
float i = rd/j;
printf("\n\n.............A L E R T...............\n\n");



}





}