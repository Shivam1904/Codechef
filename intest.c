#include<stdio.h>
int main() {
    unsigned long int i,x,y,k=0;
    unsigned long int z;
    scanf("%lu %lu",&x,&y);
    
    for(i=0;i<x;i++){
            scanf("%lu",&z);
            if((int)z%y==0)
              k++;
    }
     
    printf("%lu",k);        
    return 0;
}