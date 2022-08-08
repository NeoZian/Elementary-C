#include<stdio.h>

void main(){

    int num,fact=1,i=1;;


    printf("Enter a number:");
    scanf("%d",&num);

  /*  while(i<=num){

        fact = fact*i;
        i++;
    }
    */
    //or you can do this

    for(i=1;i<=num;i++){

        fact=fact*i;

    }

    printf("\n %d!=%d",num,fact);


}
