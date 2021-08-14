#include <stdio.h>
#include <inttypes.h>  // 支持可移植类型

int main3(void) {

	int x = 100;

	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);

	// 显示进制前缀 使用%#o %#x %#X
	printf("dec = %d; octal = %#o; hex = %#x; hex = %#X\n\n", x, x, x, x);

	// 整数溢出
	int i = 2147483647;
	unsigned int j = 4294967295;
	printf("%d %d %d \n", i, i + 1, i + 2);
	printf("%d %d %d \n", j, j + 1, j + 2); // 结果会是-1,0,1
	printf("%u %u %u \n\n", j, j + 1, j + 2); // 结果为4294967295,0,1
	
	// short long
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d \n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n\n", verybig, verybig);

	// char
	char ch;
	printf("Please enter a character.\n");
	scanf("%c", &ch);
	printf("The code for %c is %d.\n\n", ch, ch);

	// 可移植类型
	int32_t me32;
	me32 = 45933945;
	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next, let`s not make any assumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h: ");
	printf("me32 = %" PRId32 "\n\n", me32);

	//  float double
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	printf("%f can be written %e\n", aboat, aboat);
	printf("And it`s %a in hexadecimal, powers of 2 notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);

	// 转义 \b退格  \t制表  \r回车
	float salary;
	printf("\aEnter your desired mnothly salary:");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary*12.0);
	printf("\r Gee!\n");

	return 0;
}
