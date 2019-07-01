#include <stdio.h>

#include "library.h"

int main(void)
{
    int input = 3;
    int output;
    
    output = add(input);
    
    printf("%d", output);
    
    for (unsigned long i = 0 ; i < 9223372036854775807; i++) {};
    
    return 0;
}
