#include <stdio.h>
#include "myfuncs.h"

int main(void) {

    for (int i = 0; i < 3; i++) {

        foo();
        goo();
        zoo();
    }

    for (int i = 0; i < 3; i++) {
        zoo();
    }

    return 0;
}