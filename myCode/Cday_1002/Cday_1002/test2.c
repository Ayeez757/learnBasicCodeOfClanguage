#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	long a, b;
	double c;
	scanf(" % 2ld % 3ld", &a, &b);//按指定域宽从输入数据中截取long型变量a和变量b的值
	scanf("%f", &c);
	printf("%ld\n", a);
	printf("%ld\n", b);
	printf("%lf\n", c);
	return 0;
}