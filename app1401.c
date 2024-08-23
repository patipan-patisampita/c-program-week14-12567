#include <stdio.h>
int testPointerAddress()
{
    int vara = 5, varb = 10;
    printf("vara: %d\n", vara); // vara:5
    printf("varb: %d\n", varb); // varb:10

    printf("Address of var: %p\n", &vara); // Address of var : 0061FEFC
    printf("Address of var: %p\n", &varb); // Address of var : 0061FEF8
    return 0;
}
