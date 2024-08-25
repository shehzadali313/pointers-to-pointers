#include <stdio.h>

int main() {

    
    int a = 42;
    float b = 3.14;
    char c = 'X';

    int *a_p = &a;
    float *b_p = &b;
    char *c_p = &c;

    int **aa_p = &a_p;
    float **bb_p = &b_p;
    char **cc_p = &c_p;

    int ***aaa_p = &aa_p;
    float ***bbb_p = &bb_p;
    char ***ccc_p = &cc_p;

    printf("Original values:\n");
    printf("\tInteger: %d\n", a);
    printf("\tFloat: %f\n", b);
    printf("\tCharacter: %c\n\n", c);

    printf("Using triple pointers to print values:\n");
    printf("\tInteger: %d\n", ***aaa_p);
    printf("\tFloat: %f\n", ***bbb_p);
    printf("\tCharacter: %c\n\n", ***ccc_p);

    ***aaa_p = 1000;
    ***bbb_p = 99.99;
    ***ccc_p = 'Z';

    printf("Modified values:\n");
    printf("\tInteger: %d\n", a);
    printf("\tFloat: %f\n", b);
    printf("\tCharacter: %c\n", c);

    return 0;
}
