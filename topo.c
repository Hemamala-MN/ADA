#include<stdio.h>
void dfs(int);
int a[10][10],expr[10],n,vis[10],j;
void main()
{
    int i,m,u,v;
    printf("enter the number of vertices\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=0;
        }
        vis[i]=0;
    }
     printf("Enter the number of edges\n");
     scanf("%d",&m);
     for(int i=1;i<=m;i++)
     {
         printf("Enter an edges\n");
         scanf("%d %d",&u,&v);
         a[u][v]=1;
         
     }
     j=0;
     for(int i=1;i<=n;i++)
     {
         if(vis[i]==0)
         {
             dfs(i);
         }
     }
     printf("Topological order\n");
     for(int i=n-1;i>=0;i--)
     {
         printf("%d\t",expr[i]);
         
     }
}
void dfs(int v)
{
    int i;
    vis[v]=1;
    for(int i=1;i<=n;i++)
    {
        if(a[v][i]==1&&vis[i]==0)
        {
            dfs(i);
        }
    }
    expr[j++]=v;
}
