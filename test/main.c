#include <stdio.h>
#include <stdlib.h>
#include "read.h"


int main() {
    char* input = read(" >> ");
    input != NULL?
        printf(" | read()  test successful\n"):
        printf(" | read()  test failed\n");

    clean(&input);
    input == NULL?
        printf(" | clean() test successful\n"):
        printf(" | clean() test failed\n");

    return 0;
}
