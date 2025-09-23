#include<stdio.h>
int main(){
int i, x[5];

printf("enter the elements of array:\n");
for(i=0;i<5;i++){
    scanf("%d", &x[i]);}

printf("reversed array:\n");
for(i=4;i>=0;i--){
    printf("%d ", x[i]);
}}
