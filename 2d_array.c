#include<stdio.h>


void main(){


    int arr1[3][2] = {1,2,3,4,5,6};

    int arr2[3][2] = {1,2,3};

    int arr3[3][2] = {{10,20},{30,40},{50,60}};

    int i,j,k;

    printf("array 1::\n");

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){

            printf(" arr1[%d][%d]=%d\n",i,j,arr1[i][j]);

        }

    }


        printf("array 2::\n");

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){


            printf(" arr2[%d][%d]=%d\n",i,j,arr2[i][j]);

        }

    }


            printf("array 3::\n");

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){


            printf(" arr3[%d][%d]=%d\n",i,j,arr3[i][j]);

        }

    }

    int m,n;

    printf("\n enter the number of rows:");
    scanf("%d",&m);
    printf("\n enter the number of columns:");
    scanf("%d",&n);

    int mat[m][n];


     printf("\n enter the elements of matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){

            printf("matrix[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);


        }

    }


        printf("\n Your desired matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){

            printf("\nmatrix[%d][%d]:%d",i,j,mat[i][j]);

        }

    }

            printf("\n ========OR========:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){

            printf("\t%d",mat[i][j]);

        }
        printf("\n");

    }




}
