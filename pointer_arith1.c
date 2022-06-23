#include <stdio.h>

int main(void){
    char *pc;
    int *pi;
    double *pd;


    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;
    // printf("증가 전 pc = %s, pi = %ls, pd = %p\n", pc,pi,pd);
    printf("증가 전 pc = %p, pi = %p pd = %p\n", pc,pi,pd);


    pc++;
    pi++;
    pd++;

    printf("증가 후 pc = %p, pi = %p pd = %p\n", pc,pi,pd);
    // // printf("증가 후 pc = %s, pi = %ls, pd = %p\n", pc,pi,pd);

    printf("pc+2 = %p, pi+2 = %p pd = %p\n", pc+2,pi+2,pd+2);
    // // printf("pc+2 = %s, pi+2 = %ls, pd+2 = %p\n", pc,pi,pd);

    return 0;
}