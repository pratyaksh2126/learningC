// Write a program to find sum of first N natural numbers //
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int sum = 0;
    printf("Enter a No.: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        sum= sum+i;
    }
    printf("%d", sum);


    
    return 0;
}