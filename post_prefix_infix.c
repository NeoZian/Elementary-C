#include<stdio.h>


void main(){

    int i=3,b;

    /*
    b = ++i; //b=4 , i=4
    printf("b=%d, i=%d",b,i);

    b = i++;  //b=4, i =5
    printf("\nb=%d, i=%d",b,i);

    b = i--;   //b=5, i=4
    printf("\nb=%d, i=%d",b,i);

    b = --i;   //b=3, i=3
    printf("\nb=%d, i=%d",b,i);

    */

    i=5;

    b = ++i + i++ ;  //b=13(6+(6+1)), i =7
    printf("\nb=%d, i=%d",b,i);

    b = ++i + i ;   //b=16((7+1)+8), i=8
    printf("\nb=%d, i=%d",b,i);

    b = i++ + i++ ;   //b=8+(8+1), i=10, b=17
    printf("\nb=%d, i=%d",b,i);

    b = ++i + ++i ;  //b=23    ,i=12
    printf("\nb=%d, i=%d",b,i);

    int c=5,f;
    f = ++c + ++c;

    printf("\nkkk %d",f);

    int d=5,e,m=5;
    e = d++ + m++;  //e=10

    printf("\ndddd %d",e);



     d=5,e,m=5;
    e = ++d + ++m;  //e=12

    printf("\n %d",e);

    c=5;
    f = c++ + ++c; //c=12

    printf("\n %d",f);


    c=5;
    f = ++c + c++; //c=13
    printf("\n %d",f);


}
