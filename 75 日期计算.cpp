#include<stdio.h>
int main(void)
{
	int N,y,m,d,t,b=0,i; //NΪ������yΪ�꣬mΪ�£�dΪ�죬tΪ����������bΪ���������ֵ 
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d%d%d",&y,&m,&d);
		if((y%4==0 && y%100!=0)||y%400==0)  //ƽ�ꡢ����Ķ������� 
		{
			t=29;
		}
		else
		    t=28;
		for(i=1;i<=m;i++)
		{
			switch(i-1)   //i-1 ������i-1���������� 
			{
				case 1:   //������ʱ��˳�� 
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
		b=0;  //��B���㣬����Ӱ���´ν�� 
	}
}
