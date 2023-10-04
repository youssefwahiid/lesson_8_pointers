#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Input the number of elements to store in the array (max 15) : ");
    fflush(stdout);
    scanf("%d", &n);

    if (n <= 0 || n > 15) {
        printf("Invalid input for the number of elements.\n");
        return 1;
    }

    int arr[15]; // Assuming a maximum of 15 elements
    int* ptr = arr;
    int i =1;

    while (i <= n) {
        printf("element - %d : ", i);
        fflush(stdout);
        scanf("%d", ptr);
        i++;
        ptr++;
    }

    printf("\nThe elements of array in reverse order are : .\n");

    int *p = arr + n-1; // Point to the end of the string

     i =n;

    while (p >= arr) {
        printf("element - %d : %d \n", i , *p);
        i--;
        p--;
    }

    return 0;
}
