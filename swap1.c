#include <stdio.h>
void swap(int *px, int *py);

int main(void){
    // int a = 100, b = 200;
    int a = 100;
    int b = 200;
    int *pa = NULL;
    int *pb = NULL;
    
    pa = &a;
    pb = &b;

    printf("a=%d b=%d\n",a, b);

    *pa = 300;
    *pb = 400;
    printf("a=%d b=%d\n",a, b);
    printf("ad_a=%p ad_b=%p\n",pa,pb);

    swap(&a,&b);
    printf("a=%d b=%d\n",a, b);
    printf("ad_a=%p ad_b=%p\n",pa,pb);

    return 0;
}

void swap(int *px, int *py){
    int tmp;

    printf("x=%d y=%d\n",*px, *py);
    printf("ad_x=%p ad_y=%p\n",px,py);

    tmp = *px;
    *px = *py;
    *py = tmp;

    printf("x=%d y=%d\n",*px, *py);
    printf("ad_x=%p ad_y=%p\n",px,py);
}