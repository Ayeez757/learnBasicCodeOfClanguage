#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
输入N
输入这段整数，塞到一个数组中
嵌套for遍历，分别确定头和尾，并且尾大于头
里面再嵌套一个for用来计算i到j的和
每个遍历的结果都和之前的比较，确定出最大的那个
输出
*/
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0;i < n;i++) {
        for (int j = i;j < n;j++) {
            int sum = 0;
            for (int k = i;k <= j;k++) {
                sum = sum + arr[k];
            }
            if (sum > max) {
                max = sum;
            }
        }
    }
    printf("%d", max);
    return 0;
}