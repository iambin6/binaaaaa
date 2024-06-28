#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Create a frequency array to count the occurrences of each element
    int freq[1000] = {0}; // assume max value is 99
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print unique elements in ascending order
    printf("Unique elements: ");
    for (int i = 0; i < 1000; i++) {
        if (freq[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}