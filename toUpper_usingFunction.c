#include<stdio.h>


void main(){


    int i=0;
    char str[20];


    printf("Enter a string:");
    scanf("%[^\n]s",&str);  //takes an entire line


    while(str[i]){

        str[i] = toupper(str[i]);
        i++;


    }

    printf("To Upper:%s",str);


    //another one

    char str2[20];
    printf("\nEnter another string:");
    scanf("%s",str2);


    printf("To Upper:%s\n\n",strupr(str2));




}
