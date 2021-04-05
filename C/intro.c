/*

#include<stdio.h>: header file  is compulsary
main(): function is the only function which execute in program
printf(): to print something
scanf(): to take input from user 

*/


#include<stdio.h>

void main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",a);
    printf("Enter second number: ");
    scanf("%d",b);
    printf("Sum of number is: %d",a+b);
}