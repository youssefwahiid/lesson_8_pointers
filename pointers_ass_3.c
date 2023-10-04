#include <stdio.h>
#include <string.h>

int main() {
    char text[100];

    printf("Enter a text: ");
    fflush(stdout);
    fgets(text, sizeof(text), stdin);

    char *p = &text[strlen(text) - 1]; // Point to the end of the string

    printf("Reversed text: ");

    while (p >= text) {
        printf("%c", *p);
        p--;
    }

    return 0;
}
