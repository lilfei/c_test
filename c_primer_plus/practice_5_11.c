#include <stdio.h>

#define FORMAT "%s! C is cool!\n"

int main(void) {

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
	
	return 0;
}