#include "stdafx.h"
void main()
{
	int i=0;
	char c,p;
	while((c=getchar())!='\n')
		p=c;
	switch(p)
	{
	case'd':printf("���еĻ�����ͣ�£��������У���������\n");break;
	case'y':printf("����������ʻ\n");break;
	case'n':printf("����������ֹ����������ͨ��\n");break;
	default: break;
	}
	
}