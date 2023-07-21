#include <stdio.h>
#include <limits.h>

struct Pair {
  int first;
  int second;
};

struct Pair highestProductPair(int* arr, int size) {
  int max1 = INT_MIN;
  int max2 = INT_MIN;
  int min1 = INT_MAX;
  int min2 = INT_MAX;

  for (int i = 0; i < size; i++) {
    int n = arr[i];
    if (n > max1) {
      max2 = max1;
      max1 = n;
    } else if (n > max2) {
      max2 = n;
    }
 if (n < min1) {
      min2 = min1;
      min1 = n;
    } else if (n < min2) {
      min2 = n;
    }
  }

  return (max1 * max2 > min1 * min2) ? (struct Pair) {max1, max2} : (struct Pair) {min1, min2};
}

int main() {
  int arr1[] = {1, 4, 3, 6, 7, 0};
  int arr2[] = {-1, -3, -4, 2, 0, -5};

  struct Pair result1 = highestProductPair(arr1, 6);
  struct Pair result2 = highestProductPair(arr2, 6);

  printf("{%d, %d}\n", result1.second, result1.first);
  printf("{%d, %d}\n", result2.second, result2.first); 
  
return 0;
}
