#include <stdio.h>
#include <math.h>

#define RAD_TO_DEG (180/(4*atan(1)))
#define RAD_TO_DEG_L (180/(4*atanl(1)))

/* 使用generic定义泛型宏 */
#define SQRT(X) _Generic((X),\
	long double: sqrtl,\
	default: sqrt,\
	float: sqrtf)(X)

#define SIN(X) _Generic((X), \
	long double: sinl((X)/RAD_TO_DEG_L),\
	default: sin((X)/RAD_TO_DEG_L),\
	float: sinf((X)/RAD_TO_DEG_L)\
)

typedef struct polar_v {
	double magnitude;
	double angle;
} Polar_V;

typedef struct rect_v {
	double x;
	double y;
} Rect_V;

Polar_V rect_to_polar(Rect_V);

int main(void) {

	
#if 0
	// 直角坐标转换为极坐标
	Rect_V input;
	Polar_V result;

	puts("Enter x and y coordinates; enter q to quit:");
	while (scanf("%lf %lf", &input.x, &input.y) == 2) {
		result = rect_to_polar(input);
		printf("magnitude = %0.2f, angle = %0.2f\n", result.magnitude, result.angle);
	}
	puts("Bye!");
#endif

#if 0
	// 此处报错，因为visual studio 2017不支持C11,可以使用Clang/Gcc
	float x = 45.0f;
	double xx = 45.0;
	long double xxx = 45.0L;

	long double y = SQRT(x);
	long double yy = SQRT(xx);
	long double yyy = SQRT(xxx);

	printf("%.17Lf\n", y);
	printf("%.17Lf\n", y);
	printf("%.17Lf\n", y);

	int i = 45;
	yy = SQRT(i);
	printf("%.17Lf\n", yy);
	yyy = SIN(xxx);
	printf("%.17Lf\n", yyy);
#endif


	return 0;
}

Polar_V rect_to_polar(Rect_V rv) {
	Polar_V pv;

	pv.magnitude = sqrt(rv.x * rv.x + rv.y * rv.y);
	if (pv.magnitude == 0) {
		pv.angle = 0.0;
	}
	else {
		pv.angle = RAD_TO_DEG * atan2(rv.y, rv.x);
	}

	return pv;
}