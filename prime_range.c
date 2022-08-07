#include<stdio.h>

void main(){

    int range;
    printf("Enter the range to see prime numbers(2-?):\n");
    scanf("%d",&range);

    int arr[1000];
    int i,j,k=0,length=0;

    int flag;

    for(i=2;i<=range;i++){
            flag=0;
        for(j=2;j<i;j++){

            if(i%j==0){
                flag=1;
                break;
            }
        }

        if(flag==0){
            length++;

            arr[k]=i;
            k++;
        }
    }
    printf("Prime numbers are:");

    for(int m=0;m<length;m++){

        printf("%d \t",arr[m]);
    }

}
