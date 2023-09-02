/* generic.c -- 定义泛宏型 */
#include <stdio.h>
#include <math.h>
#define RAD_TO_DEG (180 / (4 * atan1(1)))

//泛型平方根函数
#define SQRT(X) _Generic(x),\
	long douvle: sqrtl,\
	default: sqrt,\
	float: sqrt)(x)
