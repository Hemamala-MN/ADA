
#include <stdio.h>
int binary_search(int a[],int beg, int end,int val)
{
    int mid;
    if(end>=beg)
    {
        mid=(beg+end)/2;
        if(a[mid]==val)
        {
            return mid+1;
        }
        else if(a[mid]<val)
        {
            return binary_search(a,mid+1,end,val);
        }
        else
        {
            return binary_search(a,beg,mid-1,val);
        }
    }
    return -1;
}
int main()
{
    int a[6];
    int val;
    printf("Elements of the array\n");
    for(int i=0;i<6;i++)
    {
        printf("Enter the Elements for array\n");
        scanf("%d",&a[i]);
    }
    printf("Enter the value to be searched\n");
    scanf("%d",&val);
    int res=binary_search(a,0,5,val);
    if(res==-1)
    {
        printf("Element is not  found\n");
    }
    else
    {
        printf("Element is found\n");
    }
    return 0;
}