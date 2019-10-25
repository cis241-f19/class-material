#include <stdio.h>

int main(void) {
    int a = 54;
    int *iptr;
    //char *cptr;
    //float *fptr;

    //*iptr = 6; // a comment 
    //printf("What is iptr? %p\n", iptr);
    
    iptr = &a;
    printf("What is value stored at iptr? %d\n", *iptr);
    a++;
    printf("What is iptr? %p\n", iptr);
    
    printf("What is iptr+1? %p\n", iptr+1);
    printf("What is *(iptr+1) %d\n", *(iptr+1));
    printf("What is value stored at iptr? %d\n", *iptr);

    printf("What is &iptr? %p\n", &iptr);

    iptr = 5;
    printf("What is iptr? %p\n", iptr);
    return 0;


    
}
