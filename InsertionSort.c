#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,n,key;
    int a[100];
    printf("\n Enter number of elements:");
    scanf("%d", &n);
    printf("\n Enter %d elements:--",n);
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);

    for(i=1; i<n; i++)
    {
        key = a[i];
        j=i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
            a[j+1]=key;
    }
    printf("\n AFter sorting the elements are:--");
    for(i=0; i<n; i++)
    printf("%4d", a[i]);
    
}