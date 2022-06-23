#include <stdio.h>

int main(void){
    int i = 10;
    double f = 12.3;
    int *pi = NULL;
    double *pf = NULL;

    pi = &i;
    pf = &f;
    printf("%p %p\n", pi, &i);
    printf("%f %p\n", *pf, &f);

    i = 100;
    printf("%d %d\n", i, *pi);

    *pi = 200;
    printf("%d %d\n", i, *pi);

    return 0;
}