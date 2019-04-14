#include <stdio.h>
#define N  100
void monthCalendar(int _week_fisday,int _month_days);

int  main()
{
	int m,n;
	printf("please Input the first day of week :");
	scanf("%d",&m);
	printf("please Input the month of days:");
	scanf("%d",&n);
	monthCalendar(m,n);
}
void monthCalendar(int _week_fisday,int _month_days)
{
	char a[N]={'S','M','T','W','T','F','S'};
	int  b[N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,
	           22,23,24,25,26,27,28,29,30,31};
	int i,k,m=0;
	if(_week_fisday==7)
	_week_fisday=0;
	for(i=0;i<7;i++)
	{
		printf("%3c",a[i]);
	}
	printf("\n");
	for(i=_week_fisday;i>0;i--)
	{
		printf("   ");
	}
	for(k=_week_fisday+1;k<8;k++)
	{
		printf("%3d",b[m]);
		m++;
	}
	printf("\n");
	for(i=2;i<7;i++)
	{
		for(k=1;k<8;k++)
		{
			printf("%3d",b[m]);
			m++;
			if(_month_days==b[m-1])
			break;
		}
		if(_month_days==b[m-1])
		break;
		printf("\n");
	}
}



