//Q.3 Write a Program to print enven numbers from 1 to N using a do-while loop.

#include<stdio.h>
#include<conio.h>

int main(){
int i,a=1;

printf("enter the any number :  ");
scanf("%d",&i);

do{
   if(a%2==0){

    printf("%d\n",a);
   }
a++;
}while(i>=a);

return 0;
getch();    
}



