#include <stdio.h>

#define SIZE 10

int pnt_add(void);

int sum(int arr[], int n);
int sump(int * start, int * end);

int order(void);

int zippo(void);

int main10(void) {

#if 0
	int marbles[SIZE] = { 20,10,5,49,4,16,18,26,31,20 };
	long answer1,answer2;

	// 打印数组地址
	pnt_add();

	// 使用数组形参
	answer1 = sum(marbles, SIZE);
	printf("1、The total number of marbles is %ld.\n", answer1);
	printf("1、The size of marbles is %zd bytes.\n", sizeof marbles);

	// 使用指针形参
	answer2 = sump(marbles, marbles + SIZE);
	printf("2、The total number of marbles is %ld.\n", answer2);

	// 指针运算
	order();
#endif

	// 多维数组
	zippo();

	return 0;
}

int pnt_add() {
	short dates[SIZE];
	short * pti;
	short index;
	double bills[SIZE];
	double * ptf;
	pti = dates;
	ptf = bills;
	printf("%23s %11s\n", "short", "double");
	for (index = 0; index < SIZE; index++) {
		printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
	}
}

int sum(int ar[], int n) {
	int i;
	int total = 0;
	for (i = 0; i < n; i++) {
		total += ar[i];
	}
	printf("1、The size of ar is %zd bytes.\n", sizeof ar);
	return total;
}

int sump(int * start, int * end) {
	int total = 0;
	while (start < end) {
		total += *start;
		start++;
	}
	return total;
}

// *与++优先级相同，结合律从右向左
int order() {
	int data[2] = { 100,200 };
	int moredata[2] = { 300,400 };
	int * p1, *p2, *p3;
	p1 = p2 = data;
	p3 = moredata;
	printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
	printf(" *p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
	printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
}

// 多维数组
int zippo() {
	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };
	printf("   zippo = %p,    zippo + 1 = %p\n", zippo, zippo + 1);
	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
	printf("  *zippo = %p,    *zippo +1 = %p\n", *zippo, *zippo + 1);
	printf("zippo[0][0] = %d\n", zippo[0][0]);
	printf("  *zippo[0] = %d\n", *zippo[0]);
	printf("    **zippo = %d\n", **zippo);
	printf("        zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));
}

