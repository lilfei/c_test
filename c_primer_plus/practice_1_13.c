#include <stdio.h>

void butler(void);  /* ANSI/ISO C函数原型(prototype) */
void review_2_11_8(void);
void review_2_11_9(void);

/*
	double类型接收输入时使用%lf，输出可以使用%f
*/
int main(void) {

	double inch;
	printf("请输入英寸：");
	scanf("%lf", &inch);

	double centimeter;
	centimeter = inch * 2.54f;
	printf("%f英寸等于%f厘米。\n\n", inch, centimeter);

	printf("i will summon the butler function.\n");
	butler();  // 函数调用
	printf("Yes, Bring me some tea and writeable DVDs.\n\n");

	review_2_11_8();
	review_2_11_9();

	return 0;

}

/*
	函数定义
*/
void butler(void) {
	printf("You rang, sir?\n");
}

void review_2_11_8(void) {
	int a, b;

	a = 5;
	b = 2;
	b = a;
	a = b;
	printf("a is %d, b is %d \n\n", a, b);
}

void review_2_11_9(void) {
	int x,y;

	x = 10;
	y = 5;
	y = x + y;
	x = x * y;
	printf("x is %d, y is %d \n\n", x, y);
}