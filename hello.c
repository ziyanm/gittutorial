#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
float add (float a, float b) 
{
    return a+b;
}

int main (void) 
{
    printf("%f", add(3,2));
    return 0;
}
