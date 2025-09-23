#include<stdio.h>
int main(){
int i,j, x[5], y[10];

printf("enter the elements of array 1:\n");
for(i=0;i<5;i++){
    scanf("%d", &x[i]);}

printf("enter the elements of array 2:\n");
for(i=0;i<10;i++){
    scanf("%d", &y[i]);}

j=0;

for(i=0;i<10;i=i+2){
    y[i]=x[j];
    j=j+1;}

printf("array 2 after copying elements of array 1 by skipping one element:\n");
for(i=0;i<10;i++){
    printf("%d ", y[i]);
}}
