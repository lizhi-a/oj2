#include<stdio.h>
int main(void)
{
	int N,y,m,d,t,b=0,i; //N为组数，y为年，m为月，d为天，t为二月天数，b为最终所求的值 
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d%d%d",&y,&m,&d);
		if((y%4==0 && y%100!=0)||y%400==0)  //平年、闰年的二月天数 
		{
			t=29;
		}
		else
		    t=28;
		for(i=1;i<=m;i++)
		{
			switch(i-1)   //i-1 代表有i-1个月是满的 
			{
				case 1:   //不等于时，顺延 
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:b+=31;break;
				case 2:b+=t;break;
				case 4:
				case 6:
				case 9:
				case 11:b+=30;break;
			}
		}
		b+=d;
		printf("%d\n",b);
		b=0;  //对B清零，避免影响下次结果 
	}
}
