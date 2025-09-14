#include<stdio.h>

int main(){
    int i, amount, count;
    int notes[]={500,200,100,50,20,10,5,2,1};
    
    printf("enter the amount: ");
    scanf("%d", &amount);
    
    for(i=1;i<9;i++){
        count=amount/notes[i];
        
        if(count>0)
        printf("%d note(s) of %d\n", count,notes[i]);
        amount=amount%notes[i];
    }
}