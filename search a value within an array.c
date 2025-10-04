#include<stdio.h>
int main(){

int i, N, value;

printf("no. of elements of array= ");
scanf("%d", &N);

int x[N];

printf("enter the elements of array= ");
for(i=0;i<N;i++){
scanf("%d", &x[i]);}

printf("enter the value you want to search= ");
scanf("%d", &value);

for(i=0;i<N;i++){
    if(x[i]==value){
    printf("%d is at %d position", value, i+1);
    }}}
