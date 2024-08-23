#include <stdio.h>
int testPointer()
{
    int *pc, c;
    c = 22;
    printf("Address of c:%p\n", &c); // Address of c:0061FEF8
    printf("Value of c:%d\n\n", c);    // 22

    pc = &c;
    printf("Address of pointer pc: %p\n", pc);  // Address of pointer pc : 0061FEF8
    printf("Content of pointer pc: %d\n\n", *pc); // Content of pointer pc : 22

    c = 11;
    printf("Address of pointer pc:%p\n", pc);  // Address of pointer pc : 0061FEF8
    printf("Content of pointer pc:%d\n\n", *pc); // Content of pointer pc : 11

    *pc = 2;
    printf("Address of c:%p\n", &c); // Address of pointer c:0061FEF8
    printf("Values of c:%d\n\n", c); // Address of pointer c:2
}
