#include <stdio.h>
#include <math.h>

double power(double n, int p);
void review(void);
void practice(void);

int main6(void) {

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

#if 0
	review();
#endif

	practice();

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

// 6.16
void practice(void)
{
#if 0
	// 1
	char codeArr[26];
	char start = 'a';
	int i = 0;
	for (; i < 26; i++) {
		codeArr[i] = start + i;
	}
	i = 0;
	for (; i < 26; i++) {
		printf("%c", codeArr[i]);
	}

	// 2
	printf("\n===================\n");
	int j = 1;
	i = 0;
	for (; j <= 5; j++) {
		for (i = 0; i < j; i++) {
			printf("$");
		}
		printf("\n");
	}
	
	// 3
	printf("\n===================\n");
	start = 'F';
	i = 0;
	j = 1;
	for (; j <= 6; j++) {
		for (i = 0; i < j; i++) {
			printf("%c", start - i);
		}
		printf("\n");
	}

	// 4
	printf("\n===================\n");
	start = 'A';
	for (i = 0; i < 7; i++) {
		for (j = 0; j < i; j++) {
			printf("%c", start++);
		}
		printf("\n");
	}
#endif
	// 5 ��ӡ��ĸ������
	printf("\n===================\n");
	char inputCode;
	printf(" Pleasy Enter a Upcase Code:\n");
	scanf("%c", &inputCode);
	int lines = inputCode - 'A' + 1;
	int spaceCount = lines - 1;
	for (int line = 0; line < lines; line++) {
		for (int space = 0; space < spaceCount; space++) {
			printf(" ");
		}
		int curCodes = (lines - spaceCount) * 2 - 1;  // ��ǰ��������ĸ��
		for (int rowCode = 0; rowCode < curCodes; rowCode++) {
			printf("%c", inputCode - spaceCount - abs(rowCode - ((curCodes - 1) / 2)));
		}
		for (int space = 0; space < spaceCount; space++) {
			printf(" ");
	    }
		spaceCount--;
		printf("\n");
	}
}
