/*Ä§ôÉ×ù ( 12/22 - 01/19 ) Ë®Æ¿×ù ( 01/ 20- 02/18 ) Ë«Óã×ù ( 02/19- 03/20 ) °×Ñò×ù ( 03/21 - 04/20 ) 
½ğÅ£×ù ( 04/21 - 05/20 ) Ë«×Ó×ù ( 05/21 - 06/21 ) ¾ŞĞ·×ù ( 06/22- 07/22 ) Ê¨×Ó×ù ( 07/23 - 08/22 ) 
´¦Å®×ù ( 08/23 - 09/22 ) Ìì³Ó×ù ( 09/23 - 10/23 ) ÌìĞ«×ù ( 10/24 - 11/22 ) ÉäÊÖ×ù ( 11/23 - 12/21 )*/
#include "stdafx.h"
void main()
{
	int year,month,day;
	scanf("%d.%d.%d",&year,&month,&day);
	if(month==1)
	{
		if(day>=1&&day<=19)
			printf("Ä¦ôÉ×ù\n");
		else if(day>=20&&day<=31)
			printf("Ë®Æ¿×ù\n");
	}
	else if(month==3)
	{
		if(day>=1&&day<=20)
			printf("Ë«Óã×ù\n");
		else if(day>=21&&day<=31)
			printf("°×Ñò×ù\n");
	}
	else if(month==4)
	{
		if(day>=1&&day<=20)
			printf("°×Ñò×ù\n");
		else if(day>=21&&day<=30)
			printf("½ğÅ£×ù\n");
	}
	else if(month==5)
	{
		if(day>=1&&day<=20)
			printf("½ğÅ£×ù\n");
		else if(day>=21&&day<=31)
			printf("Ë«×Ó×ù\n");
	}
	else if(month==6)
	{
		if(day>=1&&day<=21)
			printf("Ë«×Ó×ù\n");
		else if(day>=22&&day<=30)
			printf("¾ŞĞ·×ù\n");
	}
	else if(month==7)
	{
		if(day>=1&&day<=22)
			printf("¾ŞĞ·×ù\n");
		else if(day>=23&&day<=31)
			printf("Ê¨×Ó×ù\n");
	}
	else if(month==8)
	{
		if(day>=1&&day<=22)
			printf("Ê¨×Ó×ù\n");
		else if(day>=23&&day<=31)
			printf("´¦Å®×ù\n");
	}
	else if(month==9)
	{
		if(day>=1&&day<=22)
			printf("´¦Å®×ù\n");
		else if(day>=23&&day<=30)
			printf("Ìì³Ó×ù\n");
	}
	else if(month==10)
	{
		if(day>=1&&day<=23)
			printf("Ìì³Ó×ù\n");
		else if(day>=24&&day<=31)
			printf("ÌìĞ«×ù\n");
	}
	else if(month==11)
	{
		if(day>=1&&day<=22)
			printf("ÌìĞ«×ù\n");
		else if(day>=23&&day<=30)
			printf("ÉäÊÖ×ù\n");
	}
	else if(month==12)
	{
		if(day>=1&&day<=21)
			printf("ÉäÊÖ×ù\n");
		else if(day>=22&&day<=31)
			printf("Ä¦ôÉ×ù\n");
	}
	else if(month==2)
	{
		if(day>=1&&day<=18)
			printf("Ë®Æ¿×ù\n");
		else if(day>=19)
		{
			if(year%4==0&&year%100!=0)
			{
				if(19<=day<=29)
					printf("Ë«Óã×ù\n");
			}
			else if(year%400==0)
			{
				if(day>=19&&day<=29)
					printf("Ë«Óã×ù\n");
			}
			else
			{
				if(day>=19&&day<=28)
					printf("Ë«Óã×ù\n");
			}
		}
	}
}



