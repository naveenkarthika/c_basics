#include<stdio.h>
int main(){
    char s[10];
    int i,count,j;
    int n;
    // scanf("%s",s);
    // for(i=0;s[i]!='\0';i++){
    //     printf("%d\n",s[i]-'a'+1);
    //     sum +=s[i]-'a'+1;
    // }
    // printf("%d\n",sum);

    // scanf("%d",&n);
    // float temp = n;
    // for(int i=100;i>=1;i--)
    // {
        
    //     float num=temp*i/100;
    //     printf("%f\n",num);
    // }

    int arr[10];
    int arr1[10];
    int pos;
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<6;i++)
    {
        count=1;
        if(arr[i]!=-1)
		{
            for(j=i+1;j<6;j++)
            {
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                    pos=j;
                }
            }
            arr1[i]=count;
        }
        
    }

    for(i=0;i<6;i++){
        if(arr1[i]==2){
            printf("%d - duplicates  -%d -%d\n",arr[i],arr1[i],pos);
        }
        
    }

    
    
}