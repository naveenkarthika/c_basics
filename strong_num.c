#include<stdio.h>
int main()
{
	int fact,rem,n,i,sum=0;
	
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		rem=n%10;
		fact=1;
		for(i=rem;i>=1;i--)
		{
			fact=fact*i;
		}	
		sum=sum+fact;
		n=n/10;	
	}
	printf("Sum value is %d\n",sum);
	if(temp==sum)
	{
		printf("Strong number\n");
	}else{
		printf("Not\n");
	}
	return 0;
}
