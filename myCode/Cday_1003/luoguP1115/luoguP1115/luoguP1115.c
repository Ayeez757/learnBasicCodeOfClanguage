#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int current_max = arr[0];
    for (int i = 1;i < n;i++) {
        if (current_max > 0) {
            current_max = current_max + arr[i];
        }
        else {
            current_max = arr[i];
        }
        if (current_max > max) {
            max = current_max;
        }
    }
    printf("%d", max);
    return 0;
}