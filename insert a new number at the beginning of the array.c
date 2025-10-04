#include<stdio.h>
int main(){

int i, N, pos, num;

printf("no. of elements of array= ");
scanf("%d", &N);

int x[N+1];
pos=1;

printf("enter the elements of array=\n ");
for(i=0;i<N;i++){
scanf("%d", &x[i]);}

printf("enter the number to insert= ");
scanf("%d", &num);

for(i=N;i>=pos;i--){
    x[i]=x[i-1];
    }
x[pos-1]=num;

printf("array after insertion at beginning=\n ");
for(i=0;i<=N;i++){
    printf("%d ", x[i]);
}}
