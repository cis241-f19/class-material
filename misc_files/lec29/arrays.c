#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p, *p2;

    int arr[7] = {1,2,3,4,5,6,7};
    p2 = arr;
    printf("p2+1 = %p\n", p2+1);
    int mat[3][4] = {{1,3,4,8},{10,9,7,2},{5,6,11,12}};
    printf("mat[0][0] = %d\n", mat[0][0]);
    printf("arr = %p, &arr[0] = %p\n", arr, &arr[0]);
    printf("arr+1 = %p\n", arr+1);

    p = &mat[0][0];
    printf("mat = %p, mat[0] = %p\n", mat, mat[0]);
    printf("mat+1 = %p, *(mat+1) = %p\n", mat+1, *(mat+1));
    printf("mat[1][2] = %d, *(mat[1] + 2) = %d, *(*(mat+1) + 2) = %d\n", mat[1][2], *(mat[1] + 2), *(*(mat+1) + 2));
    printf("*((mat+1)+2) = %d\n", *((mat+1)+2));
    printf("p+1 = %p\n", p+1);
    
    int nrows = 3;
    int ncols = 4;
    int *mat2 = (int *) malloc(nrows*ncols*sizeof(int));
    printf("mat2[1] = %d\n", mat2[1]);
    printf("arr[6] = %d\n", arr[6]);
    printf("*(arr+6) = %d\n", *(arr+6));

    return 0;
}
