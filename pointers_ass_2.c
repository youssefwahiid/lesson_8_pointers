#include <stdio.h>

int main() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ptr = alphabet;

    printf("Alphabets are: \n");
    while (*ptr != '\0') {
        printf(" %c ", *ptr);
        ptr++;
    }

    return 0;
}
