#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    printf("%li\n", strlen(*argv));
    char * savedPtr = *argv;
    while(*++*argv);
    printf("%li\n", *argv - savedPtr);

    return 0;
}
