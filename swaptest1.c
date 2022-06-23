#include <stdio.h>
int swap(int x,int y);

int main(){
    // int a = 100, b = 200;
    int a = 100;
    int b = 200;
    int k;

    printf("a=%d b=%d\n",a, b);

    b,a = swap(a,b);
    printf("a=%d b=%d\n",a, b);
    // printf("%d\n",k);

    return 0;
}

int swap(int x,int y){
    int tmp;
    int c;

    printf("x=%d y=%d\n",x, y);

    tmp = x;
    x = y;
    y = tmp;

    printf("x=%d y=%d\n",x, y);

    // c = x+y;

    return y,x;
}