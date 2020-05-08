#include <stdio.h>
#include <stdlib.h>

int main () {
    size_t *ptr = malloc(sizeof(size_t));
    *ptr = (size_t) &ptr;
    printf("%p %p\n", (void *) *ptr, (void *) &ptr);
    printf("%p\n", (void *) *&*&*&*ptr);

    return 0;
}
