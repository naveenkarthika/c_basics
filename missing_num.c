//missing number in array

#include <stdio.h>
int main()
{
    int arr[100], i, j, k, sum = 0, t = 0, miss;
    printf("Enter the arr value\n");
    for (i = 1; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = 1; j < 10; j++)
    {
        sum = sum + arr[j];
    }
    for (k = 1; k <= 10; k++)
    {
        t = t + k;
    }
    printf("value of t is %d\n", t);
    printf("value of sum is %d\n", sum);
    miss = t - sum;
    printf("Missing number is %d\n", miss);
    return 0;
}
