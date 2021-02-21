#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char a[1001],i;
	int j,count;
	scanf("%s",a);
	for(i=48;i<=57;i++)
	{
	count=0;
		for(j=0;j<=strlen(a);j++)
		{
			if(a[j]==i)
			{
				count++;
			
			}
		}
		printf("%d",count);
	}
}
