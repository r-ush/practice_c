#include <stdio.h>

int main(){
    int i =10;
    char c = 69;
    double f = 12.3;

    printf("i의 주소: %p\n", &i);
    printf("c의 주소: %p\n", &c);
    printf("f의 주소: %p\n", &f);

    return 0;
}