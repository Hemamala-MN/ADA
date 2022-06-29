#include <stdio.h>
void dfs(int);
int a[10][10],vis[10],n,flag=1;
void main()
{
    int i,j,k;
    printf("Enter the vertices\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix\n");
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            vis[j]=0;
        }
        dfs(i);
        for(k=1;k<=n;k++)
        {
            if(vis[k]==0)
            {
                flag=0;
            }
        }
    }
    if(flag==0)
    {
        printf("graph is not connected\n");
    }
    else
    {
        printf("graph is  connected\n");
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
    }
