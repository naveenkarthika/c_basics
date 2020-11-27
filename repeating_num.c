#include<stdio.h>
int main()
{
	int a[100],i,b[100],j,k,count,x;
	printf("Enter the arr values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		count=1;
		if(a[i]!=-1)
		{
			for(j=i+1;j<5;j++)
			{	
				if(a[i]==a[j])
				{
					count++;
					a[j]=-1;
				}
			}
			b[i]=count;
		}
	}
	
	for(i=0;i<5;i++)
	{
		//if(a[i]!=-1)
			//printf("%d - Repeated at  -%d\n",a[i],b[i]);
		if(b[i]==2)
		{
			printf("%d - duplicates  -%d\n",a[i],b[i]);
		}
		
	}
	
	return 0;
	
}
