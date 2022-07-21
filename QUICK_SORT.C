#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define  SIZE 100000
int partition (int a[], int start, int end)  
{  
    int pivot = a[end]; 
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        
        if (a[j] < pivot)  
        {  
            i++;
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  
  

void quick(int a[], int start, int end) 
{  
    if (start < end)  
    {  
        int p = partition(a, start, end); 
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  
int main()  
{  
    
    srand(time(0));
    while(1)
    {
        int i,n,a[SIZE];
    double time_taken;
    clock_t start,end;
    printf("\nEnter the number of elements\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a[i]=rand();
    }
    start=clock(); 
    quick(a, 0, n - 1);  
    end=clock();
    printf("The sorted array\n");
    time_taken=(end-start)/(double)CLOCKS_PER_SEC*1000;
    printf("\nTime taken for sorting  elements is %lf",time_taken);
    }
   return 0;  
}  
