/*ħ���� ( 12/22 - 01/19 ) ˮƿ�� ( 01/ 20- 02/18 ) ˫���� ( 02/19- 03/20 ) ������ ( 03/21 - 04/20 ) 
��ţ�� ( 04/21 - 05/20 ) ˫���� ( 05/21 - 06/21 ) ��з�� ( 06/22- 07/22 ) ʨ���� ( 07/23 - 08/22 ) 
��Ů�� ( 08/23 - 09/22 ) ����� ( 09/23 - 10/23 ) ��Ы�� ( 10/24 - 11/22 ) ������ ( 11/23 - 12/21 )*/
#include "stdafx.h"
void main()
{
	int year,month,day;
	scanf("%d.%d.%d",&year,&month,&day);
	if(month==1)
	{
		if(day>=1&&day<=19)
			printf("Ħ����\n");
		else if(day>=20&&day<=31)
			printf("ˮƿ��\n");
	}
	else if(month==3)
	{
		if(day>=1&&day<=20)
			printf("˫����\n");
		else if(day>=21&&day<=31)
			printf("������\n");
	}
	else if(month==4)
	{
		if(day>=1&&day<=20)
			printf("������\n");
		else if(day>=21&&day<=30)
			printf("��ţ��\n");
	}
	else if(month==5)
	{
		if(day>=1&&day<=20)
			printf("��ţ��\n");
		else if(day>=21&&day<=31)
			printf("˫����\n");
	}
	else if(month==6)
	{
		if(day>=1&&day<=21)
			printf("˫����\n");
		else if(day>=22&&day<=30)
			printf("��з��\n");
	}
	else if(month==7)
	{
		if(day>=1&&day<=22)
			printf("��з��\n");
		else if(day>=23&&day<=31)
			printf("ʨ����\n");
	}
	else if(month==8)
	{
		if(day>=1&&day<=22)
			printf("ʨ����\n");
		else if(day>=23&&day<=31)
			printf("��Ů��\n");
	}
	else if(month==9)
	{
		if(day>=1&&day<=22)
			printf("��Ů��\n");
		else if(day>=23&&day<=30)
			printf("�����\n");
	}
	else if(month==10)
	{
		if(day>=1&&day<=23)
			printf("�����\n");
		else if(day>=24&&day<=31)
			printf("��Ы��\n");
	}
	else if(month==11)
	{
		if(day>=1&&day<=22)
			printf("��Ы��\n");
		else if(day>=23&&day<=30)
			printf("������\n");
	}
	else if(month==12)
	{
		if(day>=1&&day<=21)
			printf("������\n");
		else if(day>=22&&day<=31)
			printf("Ħ����\n");
	}
	else if(month==2)
	{
		if(day>=1&&day<=18)
			printf("ˮƿ��\n");
		else if(day>=19)
		{
			if(year%4==0&&year%100!=0)
			{
				if(19<=day<=29)
					printf("˫����\n");
			}
			else if(year%400==0)
			{
				if(day>=19&&day<=29)
					printf("˫����\n");
			}
			else
			{
				if(day>=19&&day<=28)
					printf("˫����\n");
			}
		}
	}
}



