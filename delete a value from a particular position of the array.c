#include<stdio.h>
int main(){

int i, N, pos;

printf("no. of elements of array= ");
scanf("%d", &N);

int x[N];

printf("enter the elements of array= ");
for(i=0;i<N;i++){
scanf("%d", &x[i]);}

printf("enter the position to delete(1 to %d)= ", N);
scanf("%d", &pos);

for(i=pos-1;i<N-1;i++){
    x[i]=x[i+1];
    }

printf("array after deletion at %d position=\n ", pos);
for(i=0;i<N-1;i++){
    printf("%d ", x[i]);
}}
