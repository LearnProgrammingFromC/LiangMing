#include "stdafx.h"
#define PRICE 0.61
void main()
{
	double w,time,fee;
	printf("����(W):");
	scanf("%lf",&w);
	printf("ÿ��ƽ��ʹ��ʱ��(h):");
	scanf("%lf",&time);
	fee=PRICE*(w/1000*time*30);
	printf("����=%.2lf\n",fee);
}
	

