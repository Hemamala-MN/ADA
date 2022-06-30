#include<stdio.h>
#include<time.h>
int  main()
{
    int n;
    clock_t start,end;
    double time_taken;
    srand(time(0));
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    start=clock();
    insertion_sort(a,n);
    end=clock();
    time_taken=(end-start)/(double)CLOCKS_PER_SEC*1000;
    printf("time taken for sorting %d elements is %1f",n,time_taken);
    return 0;
    
}
void insertion_sort(int a[],int n)
{
    int j,i,y;
    for(int i=1;i<n;i++)
    {
        y=a[i];
        j=i-1;
        while(j>=0&&a[j]>y)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=y;
    }
}
