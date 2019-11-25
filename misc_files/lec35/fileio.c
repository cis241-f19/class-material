#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fin, *fout;

    fin = fopen("random.txt", "r");
    fout = fopen("random2.txt", "w");
    if (fin == NULL) {
        printf("failed to read file");
        return 1;
    }
    
    char c;
    fscanf(fin, "%c", &c);
    fprintf(fout, "%c\n", c);


    char *buffer;
    buffer = (char *) malloc(sizeof(char)*10);
    int maxlen = 10;
    fgets(buffer, maxlen, fin);
    //fprintf(fout, "%s\n", buffer);
    fputs(buffer, fout);

    fread(buffer, 1, 6, fin);
    fputs(buffer, fout);


    fclose(fin);
    fclose(fout);
    return 0;
}
