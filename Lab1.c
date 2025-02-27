#include<stdio.h>
#include<time.h>
void main(){
int i,n,j,temp,min;
printf("Enter the size of the array:");
scanf("%d",&n);
int a[n];
srand(time(NULL));
for(i=0;i<n;i++)
a[i]=rand()%25000;

clock_t start=clock();
for(i=0;i<n-1;i++){
 min=i;
 for(j=i+1;j<n;j++){
   if(a[j]<a[min])
     min=j;
  }
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
clock_t end=clock();

double timetaken=((double)(end-start))/CLOCKS_PER_SEC;
//printf("The Sorted array elements are:");
printf("Time taken:");
printf("%f\n",timetaken);
}