#include<stdio.h>
#include<stdlib.h>
struct person {
    int age;
    float weight;
    char name[30];
};
int main()
{
    struct person *ptr;
    int i,n;
    printf("\n Enter the number of persons:");
    scanf("%d", &n);


ptr=(struct person*)malloc(n*sizeof(struct person));

for(i=0; i<n; i++)
{
    printf("\n Enter first name and age:");
    scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);

}
printf("\n Display information");
for(i=0; i<n; i++)
{
printf("\n Name:%s\t Age:%d\n", (ptr+i)->name, (ptr+i)->age);
}
return 0;
}
