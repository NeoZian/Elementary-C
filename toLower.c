#include<stdio.h>


void main(){

    char str[20];

    int i;

    printf("enter s string:");

    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++){


        if(str[i]>='A' && str[i]<='Z'){

            str[i] = str[i] + 32;


        }


    }

    printf("To Lower:%s",str);

    // for function we could use ==>> strlwr(string_name)


}
