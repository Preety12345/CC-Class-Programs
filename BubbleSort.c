#include<stdio.h>
int main()
{
    int array[100],n,i,j,swap;
    printf("\n Enter number of elements:");
    scanf("%d", &n);
    printf("\n Enter %d integers:--", n);
    for(i=0; i<n; i++)
    scanf("%d", &array[i]);

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(array[j]>array[j+1])
            {
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }
    printf("\n Sorted list in ascending order:");
    for(i=0; i<n; i++)
    printf("%4d", array[i]);
    return 0;
}