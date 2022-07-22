#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void linear_search()
{
    int j = 0;
    int n,i,key;
    int flag = 1;
    int arr[10000];
    clock_t start,end;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        arr[i]=i;
    }
    key = arr[n];
    i = 0;
    start = clock();
    while(i<n & flag!=0)
    {
        if(arr[i] != key)
            {
                while(j<1000)
                {
                    j++;
                }
            }
        else
            {
                printf("\nElement found at position %d",i);
                flag = 0;
            }
        i++;
    }
    end = clock();
    if(flag == 1)
    {
        printf("Element not found in the list\n");
    }
    printf("Time taken to find element is %f ",(difftime(end,start)*CLOCKS_PER_SEC));
}

void binary_search()
{
    int j = 0;
    int n,i,key;
    int high,low,mid;
    int flag = 1;
    int arr[10000];
    clock_t start,end;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        arr[i]=i;
    }
    key = -1;
    high = n;
    low = 0;
    i = 0;
    start = clock();
    while(i<n/2 & flag!=0)
    {
        mid = (high+low)/2;
        if(arr[mid] == key)
            {
                printf("Element found at position %d",i);
                flag = 0;
            }
        else if(arr[mid]<key)
            {
                high = mid;
                while(j<1000)
                {
                    j++;
                }
            }
        else
            {
                low = mid;
                 while(j<1000)
                {
                    j++;
                }
            }
        i++;
    }
    end = clock();
    if(flag == 1)
    {
        printf("Element not found in the list\n");
    }
     printf("\nTime taken to find element is %f",(difftime(end,start)*CLOCKS_PER_SEC));
}

int main()
{
    int choice = 0;
    printf("\nProgram to find element using linear search/binary search\n");
    while(choice != 3)
    {
    printf("1:Linear search 2: Binary search 3: Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                linear_search();
                break;
                
        case 2:
                binary_search();
                break;
        default:printf("Wrong choice entered , try again");
    }
    }
    return 0;
