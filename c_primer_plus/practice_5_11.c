#include <stdio.h>

#define FORMAT "%s! C is cool!\n"

#define TIME_TIMES 60

void practice_5(void);

int main5(void) {

#if 0
	int count, sum;
	count = 0;
	sum = 0;

	printf("BEGIN === :  count is: %d, sum is %d\n", count, sum);

	while (count++ < 5) {
		printf("BEFORT: count is: %d, sum is %d\n", count, sum);
		sum += count;
		printf("AFTER: count is: %d, sum is %d\n", count, sum);
	}

	printf("LAST === :  count is: %d, sum is %d\n", count, sum);

	int num = 10;
	printf(FORMAT, FORMAT);
	printf("%d\n", ++num); //11
	printf("%d\n", num++); //11
	printf("%d\n", num--); //12
	printf("%d\n", num); //11

	char c1, c2;
	int diff;
	float diff_num;
	c1 = 'S';
	c2 = 'O';
	diff = c1 - c2;
	diff_num = diff;
	printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, diff_num);
#endif

	practice_5();

	return 0;
}

void practice_5(void)
{
#if 0
	// 5.11.1
	float minute_5_11_1 = 1.0f;
	printf("请输入你时间长度(分钟)：");
	scanf("%f", &minute_5_11_1);
	while (minute_5_11_1 > 0) {
		printf("您输入的时间为%f小时(%.2f秒)\n", minute_5_11_1 / TIME_TIMES, minute_5_11_1 * TIME_TIMES);
		printf("您输入的时间大于0，请再次输入你时间长度(分钟)：");
		scanf("%f", &minute_5_11_1);
	}
#endif

#if 0
	// 5.11.2
	int num_5_11_2, max;
	printf("请输入一个整数：\n");
	scanf("%d", &num_5_11_2);
	max = num_5_11_2 + 10;
	while (num_5_11_2 <= max) {
		printf("%d ", num_5_11_2);
		// printf("%d\t", num_5_11_2);
		// printf("%d\n", num_5_11_2);
		num_5_11_2++;
	}
#endif

	// 5.11.3
	int days_5_11_3, week_5_11_3, days_remain_5_11_3;
	printf("请输入天数：\n");
	scanf("%d", &days_5_11_3);
	while (days_5_11_3 > 0) {
		week_5_11_3 = days_5_11_3 / 7;
		days_remain_5_11_3 = days_5_11_3 % 7;
		printf("%d day(s) are %d week(s), %d day(s)!\n",days_5_11_3, week_5_11_3, days_remain_5_11_3);
		scanf("%d", &days_5_11_3);
	}

}
