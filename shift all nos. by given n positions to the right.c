#include<stdio.h>
int main(){
int i, x[10],y[10], N;

printf("enter the elements of array: ");
for(i=0;i<10;i++){
scanf("%d", &x[i]);}

printf("N= ");
scanf("%d", &N);

if(N>10)
    N=10;

for(i=0;i<10;i++){
    if(i<N)
        y[i]=0;
    else
        y[i]=x[i-N];
        }
printf("after shifting the elements by N positions to right:\n ");
for(i=0;i<10;i++){
    printf("%d ", y[i]);
    }}
