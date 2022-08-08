#include<stdio.h>


void main(){

    int num1,num2;

    printf("Enter the 2 numbers:");
    scanf("%d%d",&num1,&num2);

    int n1=num1;
    int n2=num2;


    while(num1 != num2){

        if(num1>num2){

            num1 = num1 - num2;

        }
        else{

            num2 = num2 - num1;
        }

    }

    printf("\nThe greatest common divisor or Highest common factor of %d & %d is:%d",n1,n2,num1); //num1 or num2, both of them got the value; so we can print any of them

}
