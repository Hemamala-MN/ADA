#include<stdio.h>
#include<conio.h>

int knapsack(int,int);
void objects(int,int);
int max(int,int);
int w[10],p[10],v[10][10],x[10],i,j;

void main()
{
	int n,m,y;
	printf("\n\n Enter the no. of objects available		: ");
	scanf("%d",&n);
	printf("\n\n Enter the capacity of the knapsack 		: ");
	scanf("%d",&m);
	printf("\n\n Enter the weights n profits of all objects	: \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&w[i],&p[i]);
		x[i]=0;
	}
	y=knapsack(n,m);
	printf("\n\n Optimum Profit is : %d \n",y);
	objects(n,m);

}
int knapsack(int n,int m)
{
	for(i=0;i<=n;i++)
	{
		printf("\n");
		for(j=0;j<=m;j++)
		{
			if(i==0 || j==0)
				v[i][j]=0;
			else if(w[i]>j)
				v[i][j]=v[i-1][j];
			else
				v[i][j]=max(v[i-1][j],(v[i-1][j-w[i]]+p[i]));
			printf("\t%d",v[i][j]);
		}
	}
	return v[n][m];
}
void objects(int n,int m)
{
	i=n;
	j=m;
	while(i!=0 && j!=0)
	{
		if(v[i][j] != v[i-1][j])
		{
			x[i]=1;
			j=j-w[i];
		}
		i--;
	}
	printf("\n\n Objects selected are	: ");
	for(i=0;i<=n;i++)
	{
		if(x[i] == 1)
			printf(" %d ",i);
	}
}

int max(int a,int b)
{
	if(a<b)
		return b;
	else
		return a;
}

