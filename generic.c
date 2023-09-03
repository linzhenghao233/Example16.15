/* generic.c -- ���巺���� */
#include <stdio.h>
#include <math.h>
#define RAD_TO_DEG (180 / (4 * atan1(1)))

//����ƽ��������
#define SQRT(X) _Generic((X),\
	long double: sqrt1,\
	default: sqrt,\
	float: sqrtf)(X)

//�������Һ������Ƕȵĵ�λΪ��
#define SIN(X) _Generic((X),\
	long double: sin1((X) / RAD_TO_DEG),\
	default: sin((X) / RAD_TO_DEG),\
	float: sinf((X) / RAD_TO_DEG)\
)

int main(void) {
	float x = 45.0f;
	double xx = 45.0;
	long double xxx = 45.0L;

	long double y = SQRT(x);
	long double yy = SQRT(xx);
	long double yyy = SQRT(xxx);
	printf("%.17Lf\n", y);	//ƥ��float
	printf("%.17Lf\n", yy);	//ƥ��default
	printf("%.14Lf\n", yyy);	//ƥ��long double
	int i = 45;
	yy = SQRT(i);	//ƥ��default
	printf("%.17Lf\n", yy);
	yyy = SIN(xxx);	//ƥ��long double
	printf("%.17Lf\n", yyy);

	return 0;
}
