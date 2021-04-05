/*

#include<stdio.h>: header file  is compulsary
main(): function is the only function which execute in program
printf(): to print something
scanf(): to take input from user 

*/

/*

+ , - , * , / , % , | , << , >> , ^ , & 

Bitwise operators:
| : or
& : and
^ : xor
<< : left shift
>> : right shift

*/

#include<stdio.h>
void main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    int max = a>b?a:b;
    printf("Max:%d",max);
}

/*
or 
0 || 0 = 0
0 || 1 = 1
1 || 0 = 1
1 || 1 = 1
*/

/*
and 
0 && 0 = 0
0 && 1 = 0
1 && 0 = 0
1 && 1 = 1
*/