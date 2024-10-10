#include <stdio.h>

int main() {
    int n, f, s;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Input array elements
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second largest to the smallest possible values
    f = s = arr[0]; // Setting both to the first element initially

    // Find the largest and second largest elements
    for(int i = 1; i < n; i++) {
        if(arr[i] > f) {
            s = f;
            f = arr[i];
        } else if(arr[i] > s && arr[i] < f) {
            s = arr[i];
        }
    }

    // Check if the second largest exists
    if(f == s) {
        printf("There is no 2nd largest integer\n");
    } else {
        printf("The 2nd largest integer is: %d\n", s);
    }

    return 0;
}