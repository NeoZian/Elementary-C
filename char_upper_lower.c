#include<stdio.h>

void main(){

    printf("Enter a small letter:");

    char ch;
    scanf(" %c",&ch);
    char v = ch - 32;   //difference between A-a is 32

    printf("The capital letter is:%c",v);



    printf("\nEnter a capital letter:");

    char c;
    scanf(" %c",&c);
    char vv = c + 32;   //difference between A-a is 32

    printf("The small letter is:%c\n\n",vv);





}
