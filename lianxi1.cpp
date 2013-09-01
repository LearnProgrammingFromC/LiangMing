#include "stdafx.h"
void main()
{
	int s=0,r;
	for(int i=2;i<=100;i++)
	{
		for(int p=2;p<=i;p++)
		{
			r=i%p;
			if (r==0)
				break;
			else
				continue;
		}
		if(p==i)
		{
			printf("%d\n",i);
			s=s+p;
			p=2;
		}
	}
	printf("sum=%d\n",s);
}
