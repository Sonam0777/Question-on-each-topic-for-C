#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i, j, n;

    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated ");
        exit(0);
    } else {
        printf("Enter array elements: ");
        for (i = 0; i < n; i++) {
            scanf("%d", (ptr + i));
        }

        printf("\nBefore sorting: ");
        for (i = 0; i < n; i++) {
            printf("%d\t", *(ptr + i));
        }

        // Sorting algorithm (Modified Bubble Sort)
        int temp;
        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                if (*(ptr + i) > *(ptr + j)) {
                    temp = *(ptr + i);
                    *(ptr + i) = *(ptr + j);
                    *(ptr + j) = temp;
                }
            }
        }

        printf("\nAfter sorting: ");
        for (i = 0; i < n; i++) {
            printf("%d\t", *(ptr + i));
        }
    }

    free(ptr);
    return 0;
}
