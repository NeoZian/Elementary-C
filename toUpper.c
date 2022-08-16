#include<stdio.h>


void main(){


    char str[20];

    printf("Enter a string:");
    scanf("%s",&str);

    int len=strlen(str);

    printf("\nThe length of the string is:%d",len);

    for(int i=0;i<len;i++){

        if(str[i]>='a' && str[i]<='z'){

            str[i] = str[i] - 32;
        }

   }

        printf("\nCapital Letter's string:%s\n\n",str);



}
