#include<stdio.h>

void main(){


    int arr[5];


    arr[0] =10 ;
    arr[1] =20 ;
    arr[2] =30 ;
    arr[3] =40 ;
    arr[4] =50 ;

    for(int i=0; i<5; i++){
    printf("value of array[%d]=%d\n",i,arr[i]);

    }

    printf("==============>> Array 2 <<==================\n");

    int arr2[5] = {3,4,5,6,7};


    for(int j=0; j<5; j++){
    printf("value of array2[%d]=%d\n",j,arr2[j]);

    }




}
