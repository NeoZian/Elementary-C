#include<stdio.h>

int func1(int x, int y);
int func2(int *x, int *y);

int main(){

    int x=10, y=20;

    func1(x,y);  //call by value

    printf("\n after calling by value:: x=%d, y=%d",x,y);

    func2(&x,&y);  //call by reference

    printf("\n after calling by ref:: x=%d, y=%d",x,y);


}


int func1(int x, int y){

    x = 50;
    y = 60;

    printf("\n func1 local:: x=%d, y=%d",x,y);

}

int func2(int *x, int *y){


     printf("\n func2 local:: x=%d, y=%d",x,y);
     printf("\n func2 local:: *x=%d, *y=%d",*x,*y);
     printf("\n func2 local:: &x=%d, &y=%d",&x,&y);

    *x = 100;
    *y = 200;

    printf("\n second func2 local:: x=%d, y=%d",x,y);
    printf("\n second func2 local:: &x=%d, &y=%d",&x,&y);

}


