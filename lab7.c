#include<stdio.h>
#define MAX_ITEM 10
int knapSack(int w,int wt[],int val[],int n);
int max(int a,int b);
int main(){
int n,w,wt[50],val[50],i,j;
printf("Enter the number of values:");
scanf("%d",&n);
printf("Enter the maximum capacity:");
scanf("%d",&w);
printf("Enter the weights:\n");
for(i=1;i<=n;i++)
scanf("%d",&wt[i]);
printf("Enter the values:\n");
for(i=1;i<=n;i++)
scanf("%d",&val[i]);
printf("The maximum value is:%d\n",knapsack(w,wt,val,n));
return 0;
}
int knapsack(int w,int wt[],int val[],int n){
int i,j;
int v[MAX_ITEM+1][w+1];
for(i=0;i<=n;i++){
for(j=0;j<=w;j++){
if(i==0 || j==0){
v[i][j]=0;
}
else if(j-wt[i]<0){
v[i][j]=v[i-1][j];
}
else{
v[i][j]=max(v[i-1][j],val[i]+v[i-1][j-wt[i]]);
}
}
}
return v[n][w];
}
int max(int a,int b){
return(a>b)?a:b;
}
