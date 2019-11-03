#include <stdio.h>
#include <stdlib.h>
int main(void) {
    /*
    int val;
    int res, sum;
    sum = 0;
    res = 1+EOF;
    while (res != EOF) {
        printf("current sum is %d\n", sum);
        res = scanf("%d", &val);
        sum += val;
    }
    */
    /*
    char *s;
    int maxn = 6;
    s = (char *) malloc(sizeof(char)*maxn);
    s = fgets(s, maxn, stdin);
    printf("%s", s);
    */
    char *s;
    int nread;
    size_t maxn = 6;
    s = (char *) malloc(sizeof(char)*maxn);
    nread = getline(&s, &maxn, stdin);
    printf("%s", s);
    return 0;
}
