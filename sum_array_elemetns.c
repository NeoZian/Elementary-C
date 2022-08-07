#include<stdio.h>

int main(){

    int i,len;

    printf("Enter the number of elements:");
    scanf("%d",&len);

    int arr[len];
    int val;
    printf("\nEnter the %d elements one by one:\n",len);

    for(i=0;i<len;i++){

        scanf("%d",&val);
        arr[i]=val;


    }

    int total=0;  //to avoid garbage value

    for(int j=0;j<len;j++){

        total = total+ arr[j];

    }


     printf("\nElements of the array are:\t");

     for(int j=0;j<len;j++){

        printf("%d\t",arr[j]);

    }

     printf("\n and the sum of those elements:%d",total);


}
