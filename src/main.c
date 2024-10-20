#include <stdio.h>
#include "add.h"
int main (int argc, char ** argv){
    int a = 5;
    int b = 10;
    int result = add(a,b);
    printf("Result: %d\n", result);
    return 0;
}