#include<stdio.h>
int main(){

int i, N, pos, num;

printf("no. of elements of array= ");
scanf("%d", &N);

int x[N+1];

printf("enter the elements of array=\n ");
for(i=0;i<N;i++){
scanf("%d", &x[i]);}

printf("enter the position= ");
scanf("%d", &pos);

printf("enter the number to insert(1 to %d)= ", N+1);
scanf("%d", &num);

for(i=N;i>=pos;i--){
    x[i]=x[i-1];
    }
x[pos-1]=num;

printf("array after insertion at %d position=\n ", pos);
for(i=0;i<=N;i++){
    printf("%d ", x[i]);
}}
