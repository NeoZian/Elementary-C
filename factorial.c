#include<stdio.h>


void main(){

    int num;

    printf("Enter an integer number:");
    scanf("%d",&num);

    int i,fact=1,j;

    if(num==0){

        printf("\n The factorial of the number is: 1");


    }
    else{

        for(i=1;i<num;i++){
            j=i;
            j++;
            fact = fact * ((i*j)/i);

        }
            printf("\n The factorial of the number is: %d",fact);

    }


}
