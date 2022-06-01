#include<stdio.h>
int main()
{
    int a[6];
    for(int i=0;i<6;i++)
    {
        printf("Enter the elements to array\n");
        scanf("%d",&a[i]);
    }
    int i=0;
    int j;
    printf("Enter the element to be searched\n");
    scanf("%d",&j);
    for(int i=0;i<6;i++)
    {
        if(a[i]==j)
        {
            printf("Element is found\n");
            return 0;
        }
    }
    printf("Not found\n");
}
