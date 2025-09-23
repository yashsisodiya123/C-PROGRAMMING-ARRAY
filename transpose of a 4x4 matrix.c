#include<stdio.h>
int main(){
int i,j, x[4][4],temp;

printf("enter the elements of matrix:\n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    scanf("%d", &x[i][j]);}}

for(i=0;i<4;i++){
    for(j=i+1;j<4;j++){
    temp=x[i][j];
    x[i][j]=x[j][i];
    x[j][i]=temp;}}

printf("transpose of the matrix:\n");
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    printf("%d ", x[i][j]);
    }
    printf("\n");
}}
