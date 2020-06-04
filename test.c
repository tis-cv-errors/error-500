#include <stdio.h>

#include "library.h"

// Fails with 2GB (TIS_KERNEL_MAX_MEM=1.71)
int test1(void)
{
    int input = 3;
    int output;
    
    output = add(input);
    
    printf("%d", output);
    
    for (unsigned long i = 0 ; i < 200000; i++) {};
    
    return 0;
}

// Fails with 4GB (TIS_KERNEL_MAX_MEM=3.42)
int test2(void)
{
    int input = 3;
    int output;
    
    output = add(input);
    
    printf("%d", output);
    
    for (unsigned long i = 0 ; i < 400000; i++) {};
    
    return 0;
}
