#include<stdio.h>
int main(){

int i,j, x[10], visited[10], count;

printf("enter the elements of array= ");
for(i=0;i<10;i++){
    scanf("%d", &x[i]);}

for(i=0;i<10;i++){
    if(visited[i]==1)
        continue;
        count=0;
for(j=0;j<10;j++){
        if(x[i]==x[j]){
            count=count+1;
            visited[j]=1;}}
printf("frequency of %d is %d\n", x[i], count);
}}

