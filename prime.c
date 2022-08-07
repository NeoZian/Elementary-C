#include<stdio.h>

void main(){

    int num;

    printf("enter a number:");
    scanf("%d",&num);


    int i;

    int flag=0;

    for(i=2;i<num;i++){

        if(num%i==0){

            flag=1;
            break;

        }


    }

if(flag==0){

    printf("\n That's a prime number");
}
else if(flag==1){

        printf("\n That's not a prime number");

}
}
