#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *x,int *y)
{
    int temp=*x;
    * x=*y;
    *y =temp;
}
void selection(int a[],int n)
{
    int i,j,min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
            
        }
    swap(&a[min],&a[i]);
        
    }
    
    
}
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
        {
            printf("%d     ",a[i]);
        }
}
int main()
{
    while(1)
    {   int i,n;
        clock_t start,end;
        double time_taken;
        srand(time(0));
        printf("Enter the number of elements\n");
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[i]=rand()%100;
        }
        start=clock();
        selection(a,n);
        end=clock();
        printf("Sorted array\n");
        printarray(a,n);
        time_taken=(end-start)/(double)CLOCKS_PER_SEC*1000;
        printf("time taken for sorting %d elements is %lf\n",n,time_taken);
        
    }
    return 0;
    
    
}
