#include <stdio.h>

int main() {
    int freq[10] = {0};
    int n, i, j, count = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    if (n <= 0) {
        printf("Invalid array size!");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (freq[i] == -1)
            continue; 
            int countFreq = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                countFreq++;
                freq[j] = -1; 
            }
        }
        if (countFreq > 1) {
            printf("duplicate elements are ");
            printf("%d ", arr[i]);
            count++;
        }
    }
    if (count == 0)
        printf("-1");

    return 0;
}
