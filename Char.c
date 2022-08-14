#include<stdio.h>


void main(){

    //A-Z::65-90
    //a-z::97-122
    //0-1::48-57
    char ch;
    char c='A';
    ch = 'a';
    printf(" Variable ch =%c",ch);
    printf("\n ASCII Value of ch=%d",ch);
    printf("\n ASCII Value of A=%d",c);
    printf("\n ASCII Value of Z=%d",'Z');
    printf("\n ASCII Value of a=%d",'a');
    printf("\n ASCII Value of a=%d",'z');

    //taking a char in c as input

    char inp;
    printf("\n Enter a single char:");

    scanf("%c",&inp);
    printf("\n The input was:%c",inp);


    printf("\n ABCD ARE::");

    for(int i='A';i<='Z';i++){

        printf("\t %c %d",i,i);

    }


        for(int i='a';i<='z';i++){

        printf("\t %c %d",i,i);

    }


    for(int i='0';i<='9';i++){

        printf("\n\t %c %d",i,i);

    }

	char ch2;
	ch2 = getchar();
	printf("Input Char Is :%c",ch2);
	putchar(ch2);




}
