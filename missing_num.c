    #include<stdio.h>
int main()
{
    int n,m,c,x,i,j;
    int a[20000]={0};
    int b[20000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[x+10000]++;
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&x);
        b[x+10000]++;
    }
    for(i=0;i<20000;i++)
    {
      
        x=b[i]-a[i];
     
        if(x>0)
        printf("%d ",i-10000);
    }

    return 0;
}
