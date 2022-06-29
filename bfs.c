#include <stdio.h>
void bfs(int);
int a[10][10],vis[10],n,flag;
void main()
{
    int i,j,src;
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
        vis[i]=0;
    }
    printf("Enter the source node\n");
    scanf("%d",&src);
    printf("nodes reachable from %d vertex is \n",src);
    bfs(src);
}
void bfs(int v)
{
    int q[10],f=0,r=0,u;
    vis[v]=1;
    q[r]=v;
    while(f<=r)
    {
        u=q[f];
        printf("%d\t",u);
        for(int i=1;i<=n;i++)
        {
            if(a[u][i]==1&&vis[i]==0)
            {
                vis[i]=1;
                r=r+1;
                q[r]=i;
            }
        }
        f=f+1;
    }
}
