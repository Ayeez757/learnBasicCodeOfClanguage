#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	long a, b;
	double c;
	scanf(" % 2ld % 3ld", &a, &b);//��ָ���������������н�ȡlong�ͱ���a�ͱ���b��ֵ
	scanf("%f", &c);
	printf("%ld\n", a);
	printf("%ld\n", b);
	printf("%lf\n", c);
	return 0;
}