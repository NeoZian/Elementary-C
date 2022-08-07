#include<stdio.h>

int main(){


    int a=10, b =20;

    int *p;

    p = &a;

    printf("\nvalue of *p=%d",*p);
    printf("\nvalue of a=%d",a);
    printf("\nvalue of b=%d",b);
    printf("\naddress of &p=%d",&p);
    printf("\naddress of &a=%d,==>value of p=%d",&a,p);
    printf("\naddress of &b=%d",&b);




}
