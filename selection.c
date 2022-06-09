
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap (int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void  selection_sort (int arr[], int n)
{
  int i, j, min_idx;
  for (i = 0; i < n - 1; i++)
    {
      min_idx = i;
      for (j = i + 1; j < n; j++)
	{
	  if (arr[j] < arr[min_idx])
	    {
	      min_idx = j;
	    }
	}
      swap (&arr[min_idx], &arr[i]);
    }

}

void  print_array (int arr[], int size)
{
  int i;
  for (int i = 0; i < size; i++)
    {
      printf ("%d      ", arr[i]);
    }
}

int main ()
{
  while (1)
    {
      clock_t start, end;
      double time_taken;
      srand (time (0));
      int n, i;
     printf("Enter the value of n \n");
     scanf("%d",&n);
      int arr[n];
      for(int i=0;i<n;i++)
      {
          arr[i]=rand()%100;
      }
      start=clock();
      for(i=0;i<n-1;i++)
      {
          selection_sort(arr,n);
          end=clock();
           printf ("Sorted array \n");
            print_array (arr, n);
            time_taken=(end-start)/(double)CLOCKS_PER_SEC*1000;
            printf("\nTime taken for sorting %d elements is %lf",n,time_taken);
          return 0;
      }
    }
}


