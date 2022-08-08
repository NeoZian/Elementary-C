#include<stdio.h>

int gcd(int n1,int n2);

void main(){

    int num1,num2,last;
    printf("Enter the numbers(enter 0 to end the loop):");
    scanf("%d%d",&num1,&num2);

    while(num2 != 0){



        last = gcd(num1,num2);
        num1=last;
        scanf("%d",&num2);

        if(num2==0){
            break;
        }

    }


     printf("\n gcd is:%d",num1);

}

int gcd(int n1, int n2){

    while(n1 != n2){

        if(n1>n2){

            n1 = n1-n2;
        }
        else{

            n2= n2-n1;

        }

    }

    return n1;


}
