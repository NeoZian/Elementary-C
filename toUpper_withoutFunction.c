#include<stdio.h>


void main(){


    char str[20];

    printf("Enter a string:");
    scanf("%s",&str);

    int i;
    for(i=0; str[i] !='\0'; i++){

        if(str[i]>='a' && str[i]<='z'){

            str[i] = str[i] - 32;
        }


    }

    printf("To Upper:%s",str);

}
