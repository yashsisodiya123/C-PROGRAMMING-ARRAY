#include<stdio.h>
int main(){

int i, N, pos;

printf("no. of elements of array= ");
scanf("%d", &N);

int x[N];

printf("enter the elements of array= ");
for(i=0;i<N;i++){
scanf("%d", &x[i]);}

pos=1;

for(i=pos-1;i<N-1;i++){
    x[i]=x[i+1];
    }

printf("array after deletion at first position=\n ");
for(i=0;i<N-1;i++){
    printf("%d ", x[i]);
}}
