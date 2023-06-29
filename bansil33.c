//Q.4 Write a Program to print the fibonacci series up to N numbers using for loop.

#include<stdio.h>
#include<conio.h>

int main() {

int n,i,a=0,b=1,s;
printf("enter the any number :  ");
scanf("%d",&n);
printf("\nFibonacci Series is:\n\n\n %d %d ",a,b); 

for(i=2;i<n;i++){
    s=a+b;
    printf("%d ",s);
    a=b;
    b=s;

    }
return 0;
getch();    
}
