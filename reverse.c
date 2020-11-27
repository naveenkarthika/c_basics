#include<stdio.h> 
int main() 
{ 
	int rem,n=153,rev=0,cube,sum=0;
	int temp=n;
	while(n!=0)
	{
	    rem=n%10;
	    cube=rem*rem*rem;
	    sum=sum+cube;
	   // rev=(rev*10)+rem;
	    n=n/10;
	}
// 	printf("%d\n",rev);
    printf("%d\n",sum);
	
	if(temp==sum)
	{
	   // printf("palindrom");
	    printf("Amstrong");
	}
	else{
	    printf("not");
	}
	 
	return 0; 
} 

