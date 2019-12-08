#include<math.h>
#include<stdio.h>
int main(void)
{
	int N;
	double x1,x2,y1,y2,m;
	scanf("%d",&N);
	while(N--)
	{
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		m=sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
		printf("%.2lf\n",m); 
	}
}
