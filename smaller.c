#include <stdio.h>

int main() {
    int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left_max[n];
    left_max[0] = -1;
    for (int i = 1; i < n; i++) {
        left_max[i] = (arr[i - 1] > left_max[i - 1]) ? arr[i - 1] : left_max[i - 1];
    }

    int right_min = 1e9;
    int result = -1;


    for (int i = n - 1; i >= 0; i--) {
        if (left_max[i] < arr[i] && right_min > arr[i]) {
            result = i;
            break;
        }
        right_min = (arr[i] < right_min) ? arr[i] : right_min;
    }

    printf("Output: %d\n", result);

    return 0;
}

