#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *numbers = malloc(10 * sizeof(int));

    if (numbers == NULL)
        return 1;

    numbers[0] = 42;
    printf("Number: %d\n", numbers[0]);

    free(numbers);
    return 0;
}
