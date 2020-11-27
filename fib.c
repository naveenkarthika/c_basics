#include<stdio.h>
int main()
{
	int i,tn,t1=0,t2=1,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d \n",t1);
		tn=t1+t2;
		t1=t2;
		t2=tn;
	}
	return 0;
}
