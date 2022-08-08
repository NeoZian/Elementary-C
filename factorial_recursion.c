#include<stdio.h>

int factorial();

void main(){

    int fact,num,i,j;

    printf("Enter a number:");
    scanf("%d",&num);
    fact= factorial(num);

    printf("\n%d!=%d",num,fact);

}

int factorial(int n){

    if(n==0){

        return 1;
    }
    else{

        return n*factorial(n-1);

    }

}

