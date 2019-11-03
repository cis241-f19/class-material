#include <stdio.h>

double sum(double, double);
void swap(int *a, int *b);

int main(void) {
    // 
    //int N;
    //int N2;
    //scanf("%d %d", &N, &N2);
    // below is valid in C99, optional in C11
    // safest to assume you can't do it
    //int [N];

    double a = 12.5;
    double b = 30;
    double res = sum(a,b);
    printf("%f\n", res);

    int q = 10;
    int r = 2;

    int *x;
    //x = &q;
    x = (int *) malloc(sizeof(int));
    *x = 10;
    int *y;
    y = &r;
    printf("x=%d, y=%d\n",*x,*y);
    swap(x,y);
    printf("x=%d, y=%d\n",*x,*y);
    free(x);
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("%p, %p\n",a, b);
}


double sum(double a, double b) {
    double res;
    res = a+b;
    return res;
}
