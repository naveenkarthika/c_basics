#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char str[100];
	fgets(str);
	while(str[i]!='\0')
	{
		if(str[i]=='A'&&str[i]=='Z')
		{
			str[i]=str[i]+32;
		}
		i++;
	}
	printf("%s",str);
	return 0;
}
