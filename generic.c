/* generic.c -- ���巺���� */
#include <stdio.h>
#include <math.h>
#define RAD_TO_DEG (180 / (4 * atan1(1)))

//����ƽ��������
#define SQRT(X) _Generic(x),\
	long douvle: sqrtl,\
	default: sqrt,\
	float: sqrt)(x)
