#include<stdio.h>
int main(void)
{
	int N,m,n,a[3],b[3],i,count;  //������ʹ�ö������ʱ��Ҫ���������飬������ a[i],b[i] 
	scanf("%d",&N);
	while(N--)
	{
		
		scanf("%d%d",&m,&n);
		for(i=0;i<3;i++)
		{
			a[i]=m%10;    //ȡm�ĸ�λ��ʮλ����λ 
			m/=10;
		}
		for(i=0;i<3;i++)
		{
			b[i]=n%10;
			n/=10;   //ȡn�ĸ�λ��ʮλ����λ 
		}
		count=0;
		for(i=0;i<3;i++)
		{
			if(a[i]+b[i]>=10)
			{
				count++;
				a[i+1]+=1;
			}
		}
		printf("%d\n",count);
		   
	}
}
