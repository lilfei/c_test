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
		scanf �����ķ���ֵ��ӳ���ǰ���ָ���ĸ�ʽ����ȷ��������ݵĸ����� 
		�������������ָ����ʽ������������������� 
		�����������scanf������������ֹ�������Ѿ��ɹ���ȡ�����ݵĸ����� 
		���ԣ�ͨ��scanf�����ķ���ֵ��ָ���������ݵĸ������ɸ�ʽ���������ıȽϣ�
		�����ж����������Ƿ�ɹ���
	*/
	while (scanf("%lf%d", &x, &exp) == 2) {   // ==2 ��ʾ����Ϸ�������ֵ
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
