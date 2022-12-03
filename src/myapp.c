#include <stdio.h>
#include "myfuncs.h"

int main(void) {

    foo();
    goo();

    for (int i = 0; i < 3; i++) {
        zoo();
    }

    return 0;
}