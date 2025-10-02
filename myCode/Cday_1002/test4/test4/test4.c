#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    int chair = 30;
    int height;
    scanf("%d", &height);
    int arr[10];
    scanf("%d", &arr[0]);
    for (int i = 0;i < 9;i++) {
        scanf("%d", &arr[i + 1]);
    }
    scanf("%d", &height);
    int heightAll = height + chair;
    int count = 0;
    for (int j = 0;j < 10;j++) {
        if (arr[j] > heightAll) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}