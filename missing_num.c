//missing number in array

#include<stdio.h>
int main()
{
    int arr[100],i,j,k,sum=0,t=0,miss;
    printf("Enter the arr value\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<5;j++)
    {
        sum=sum+arr[j];
    }
    for(k=1;k<=5;k++)
    {
        t=t+k;
    }
    printf("value of t is %d\n",t);
    miss=sum-t;
    printf("Missing number is %d - \n",miss);
    return 0;
}
