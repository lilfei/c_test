#include <stdio.h>

void butler(void);  /* ANSI/ISO C����ԭ��(prototype) */
void review_2_11_8(void);
void review_2_11_9(void);

/*
	double���ͽ�������ʱʹ��%lf���������ʹ��%f
*/
int main(void) {

	double inch;
	printf("������Ӣ�磺");
	scanf("%lf", &inch);

	double centimeter;
	centimeter = inch * 2.54f;
	printf("%fӢ�����%f���ס�\n\n", inch, centimeter);

	printf("i will summon the butler function.\n");
	butler();  // ��������
	printf("Yes, Bring me some tea and writeable DVDs.\n\n");

	review_2_11_8();
	review_2_11_9();

	return 0;

}

/*
	��������
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