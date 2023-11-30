#include <stdio.h>

void print_arr(int* arr, int l) {
    printf("Array: [");
    for (int i = 0; i < l; ++i) {
        if (i == l - 1) {
            printf("%d];", arr[i]);
        }
        else {
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");
}

int main() {

    return 0;
}
