#include<stdio.h>
#include<time.h>
void main()
{
int n,i,j,k,t;
printf("Enter the number of array elements:");
scanf("%d",&n);
int a[n];
srand(time(NULL));
for(i=0;i<n;i++)
a[i]=rand()%25000;
/*printf("array elements are:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);*/
clock_t start=clock();
for(i=0;i<n;i++){
j=i;
for(k=i+1;k<n;k++){
if(a[k]<a[j])
j=k;
}
t=a[i];
a[i]=a[j];
a[j]=t;
}
clock_t end=clock();
/*printf("Sorted elements are:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");*/
double timetaken=((double)(end-start))/CLOCKS_PER_SEC;
printf("Time taken = %f\n",timetaken);
}