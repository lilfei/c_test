#include <stdio.h>

double power(double n, int p);
void review(void);

int main(void) {

#if 0
	double x, xpow;
	int exp;

	printf("Enter a num and the positive integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");

	/*
		scanf 函数的返回值反映的是按照指定的格式符正确读入的数据的个数。 
		如果输入数据与指定格式不符，则会产生输入错误。 
		遇到输入错误，scanf函数会立即终止，返回已经成功读取的数据的个数。 
		所以，通过scanf函数的返回值和指定输入数据的个数（由格式符决定）的比较，
		可以判断数据输入是否成功。
	*/
	while (scanf("%lf%d", &x, &exp) == 2) {   // ==2 表示输入合法的两个值
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}

	printf("Hope you enjoyed this power trip!\n");
#endif

	review();

	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	int i;
	for (i = 1; i <= p; i++) {
		pow *= n;
	}
	return pow;
}

void review(void)
{
	int i = 0;
	while (++i < 4) {
		printf("Hi! ");
	}

	do {
		printf("Bye! ");
	} while (i++ < 8);
	
}
