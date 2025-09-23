#include<stdio.h>
int main(){
int i, j, x[2][2], y[2][2], z[2][2];

printf("enter elements of 1st matrix:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d", &x[i][j]);}}

printf("enter elements of 2nd matrix:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d", &y[i][j]);}}


for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    z[i][j]=x[i][j]+y[i][j];
}}

printf("3rd array:\n");

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    printf("%d ", z[i][j]);}

    printf("\n");
}
}
