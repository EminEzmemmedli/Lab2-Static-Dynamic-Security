#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *buffer = malloc(8);

    if (buffer == NULL)
        return 1;

    for (int i = 0; i < 8; i++)
        buffer[i] = 'A';

    buffer[8] = '\0'; // ZEİFLİK: sərhəddən kənara yazma

    printf("Buffer: %s\n", buffer);
    free(buffer);
    return 0;
}
