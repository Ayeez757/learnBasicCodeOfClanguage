#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include<stdio.h>
int main() {
	float r;
	scanf("%f", &r);
	printf("�����=%f", 4 * PI * r * r);
	printf("���=%f", 4 * PI * r * r * r / 3);
	return 0;

}