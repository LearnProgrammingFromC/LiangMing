#include "stdafx.h"
void main()
{
	int i=0;
	char c,p;
	while((c=getchar())!='\n')
		p=c;
	switch(p)
	{
	case'd':printf("所有的机动车停下；单车先行，行人再走\n");break;
	case'y':printf("汽车缓慢行驶\n");break;
	case'n':printf("单车、行人止步，机动车通行\n");break;
	default: break;
	}
	
}