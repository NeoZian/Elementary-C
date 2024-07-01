#include<stdio.h>


void main(){


    printf("Enter the size:");
    int len;

    scanf("%d",&len);

    int arr[len];

    printf("\nenter the array1:");

   // scanf("%d",&arr);

  //  int len = sizeof(arr)/sizeof(arr[0]);


  for(int i=0;i<len;i++){

    scanf("%d",&arr[i]);

  }


    printf("\nYour reverse array is:");
  //  printf("\n size of array:%d",len);

    int arr2[len];
    int j = len-1;

    for(int i=0;i<len;i++){

        arr2[i] = arr[j];
        j--;

    }

    for(int i=0;i<len;i++){

        printf(" \t%d",arr2[i]);


    }

    int m,n;
    int flag = 1;
    for(m=0;m<len;m++){

        if(arr[m] != arr2[m]){

            flag = 0;
        }


    }

    if(flag == 1){

        printf("\nIts a palindrome");
    }
    else{

        printf("\nts not a palindrome");
    }




}
