#include<stdio.h>


void main(){

    int len,i,j,temp;

    printf("enter the length of array:");
    scanf("%d",&len);

    int arr[len];

    printf("\n enter the elements of array:");

    for(i=0;i<len;i++){

        scanf("%d",&arr[i]);

    }
    //bubble sort in ascending order

    for(i=0;i<len;i++){

        for(j=i+1;j<len;j++){

            if(arr[i]>arr[j]){

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }

    }

    //printing

    printf("The ascending sorted array:");

    for(i=0;i<len;i++){

        printf("%d\t",arr[i]);

    }

}
