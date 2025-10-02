#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int chair = 30;
    int height;

    int arr[10];
    for (int i = 0;i < 10;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &height);
    int heightAll = height + chair;
    int count = 0;
    //printf("heightAll=%d\n",heightAll);
    for (int j = 0;j < 10;j++) {
        if (heightAll >= arr[j]) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}