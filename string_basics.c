#include<stdio.h>


void main(){


    char str1[]= "subhanallah";

    char str2[6] = "three";

    char str3[] = {'a','m','a','r','\0'};

    char str4[5] = {'a','m','a','r','\0'};

    printf("\n str1=%s",str1);
    printf("\n str2=%s",str2);
    printf("\n str3=%s",str3);
    printf("\n str4=%s",str4);

    printf("\n 3rd char of the str1=>str1[2]=>%c",str1[2]);


    //taking single word as input
/*
    char in[20];
    printf("\n whats your name?(single word):");
    scanf("%s",in);
    printf("\n Your name is:%s",in);
*/

   //taking full line as input


    printf("\n whats your name?(must be<20 characters):");
    char fname[20];
    scanf("%[^\n]s",fname);
    printf("Your full name is:%s",fname);




    char in[20];
    printf("\n whats your name?(single word):");
    scanf("%s",in);
    printf("\n Your name is:%s",in);





}
