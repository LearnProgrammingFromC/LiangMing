#include "stdafx.h"
#define PRICE 0.61
void main()
{
	double w,time,fee;
	printf("功率(W):");
	scanf("%lf",&w);
	printf("每日平均使用时间(h):");
	scanf("%lf",&time);
	fee=PRICE*(w/1000*time*30);
	printf("费用=%.2lf\n",fee);
}
	

