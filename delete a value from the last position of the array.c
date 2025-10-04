#include<stdio.h>
int main(){

int i, N;

printf("no. of elements of array= ");
scanf("%d", &N);

int x[N];

printf("enter the elements of array= ");
for(i=0;i<N;i++){
scanf("%d", &x[i]);}

printf("array after deletion at last position=\n ");
for(i=0;i<N-1;i++){
    printf("%d ", x[i]);
}}
