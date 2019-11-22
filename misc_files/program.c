#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int main(void) {
    typedef struct Point {
        double x;
        double y;
        int *list;
    } Point;

    Point *p1;
    p1 = (Point *) malloc(sizeof(Point));
    p1->x = 1;
    p1->y = 2;
    p1->list = (int *) malloc(sizeof(int)*10);
    free((*p1).list);
    Point p2;
    p2.x = 12;
    
    printf("(%f,%f)", (*p1).x, (*p1).y);
    double a = 5;
    double b = 10;
    double s = sum(a,b);

    printf("a=%f, b=%f, sum = %f\n", a, b, s);
    return 0;
}
