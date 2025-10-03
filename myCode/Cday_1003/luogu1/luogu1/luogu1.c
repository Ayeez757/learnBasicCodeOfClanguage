#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
int main() {

    int n;
    int count = 0;
    int digit = 0;
    int num = 1;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        int tempNum = i;
            if (tempNum / num != 0) {
                num = num * 10;
                digit++;
            }
            int a = num;
            int temp = tempNum;
        while (true) {

            tempNum = temp / (a/10);
            temp = temp % (a / 10);
            if (tempNum== 2 || tempNum == 0 || tempNum== 1 || tempNum== 9) {
                sum += i;
                count++;
                break;
            }
            a = a /10;
            if (a==1) {
                break;
            
            }
        }

    }

    printf("%d", sum);
    return 0;

}