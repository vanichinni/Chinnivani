#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int*nofbooks;
int** noofpages;
int main()
{
	int noofshelfs,i;
	scanf("%d",&noofshelfs);
	int queries;
	scanf("%d",&queries);
	 nofbooks=(int *)malloc(sizeof(int)*noofshelfs);
	noofpages=(int**)malloc(sizeof(int*)*noofshelfs);
	for(i=0;i<noofshelfs;i++)
	{
		nofbooks[i]=0;
		noofpages[i]=(int*)malloc(sizeof(int));
	}
	while(queries+1)
	{
		int type;
		scanf("%d",&type);
		if(type==1)
		{
			int x,y;
			scanf("%d %d",&x,&y);
			nofbooks[x]+=1;
			noofpages[x]=realloc(noofpages[x],nofbooks[x]*sizeof(int));
			noofpages[x][nofbooks[x]-1]=y;
			
		}
		else if(type==2)
		{
			int x,y;
			scanf("%d %d",&x,&y);
			printf("%d\n",*(*(noofpages+x)+y));
			
		}
		else
		{
			int x;
			scanf("%d",&x);
		printf("%d\n",*(nofbooks+x));
		}
	}
	if(nofbooks)
	{
		free(nofbooks);
	}
	for(i=0;i<noofshelfs;i++)
	{
		if(*(noofpages+i))
	{
			free(*(noofpages+i));}
	}
	if(noofpages)
	{free(noofpages);
	}
}
