#include<stdio.h>
int main(){

int i, N, pos, num;

printf("no. of elements of array= ");
scanf("%d", &N);

int x[N+1];
pos=N;

printf("enter the elements of array=\n ");
for(i=0;i<N;i++){
scanf("%d", &x[i]);}

printf("enter the number to insert= ");
scanf("%d", &num);

x[pos]=num;

printf("array after insertion at last=\n ", pos);
for(i=0;i<=N;i++){
    printf("%d ", x[i]);
}}
