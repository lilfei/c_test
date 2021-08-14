#include <stdio.h>
#include <string.h>
#include <limits.h>

#define DENSITY 62.4

int main4(void) {
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi! What`s your first name?\n");
	scanf("%s", name);
	printf("%s, what`s your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n",name,volume);
	printf("Also, your first name had %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n\n", size);

	// 明示常量
	printf("Maximum int value on this system = %d. and %Lp\n", INT_MAX, INT_MAX);
	printf("Minimum int value on this system = %d. and %Lp\n", INT_MIN, INT_MIN);

	return 0;
}