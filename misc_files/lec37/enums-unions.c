#include <stdio.h>
#include <stdlib.h>

struct Student {
    char initial;
    double *scores;
    int grad_year;
};

typedef enum type {INT, CHAR, DOUBLE} type;
typedef union idc {
    char c;
    int i;
    double d;
} idc;

typdef struct Random {
    type ty;
    idc var;
}

typedef struct Student Stdnt;

int main (void) {
    Stdnt st1;
    char c;
    double *s = (double *) malloc(sizeof(double)*20);
    
    typedef enum day_of_week {Mon, Tue, Wed, Thu, Fri, Sat, Sun, HumpDay=2} day_of_week;
    day_of_week day = Wed;
    if (day == 2) {
        printf("it's HumpDay\n");
    }

    Random r1;
    r1.ty = DOUBLE;
    r1.idc.d = 16.9;
    struct Student *st2;
    /*printf("%d\n", sizeof(struct Student));
    printf("%d\n", sizeof(st1.initial));
    printf("%d\n", sizeof(st1.scores));
    printf("%d\n", sizeof(st1.grad_year));
    */
    return 0;
}
