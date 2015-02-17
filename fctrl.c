#include<stdio.h>
#include<math.h>
int main() {
    unsigned long int n,i,count;
    unsigned long int num;
    int pwr,z;
    
    scanf("%lu",&n); 
    for(i=0;i<n;i++) {
      scanf("%lu",&num);
      count=0;
      pwr=1;
      
      do {
               z = num/pow(5,pwr);
               count=count+z;
               pwr++;        
      }while(z>1);
 
     printf("%lu \n",count);
      
     }
    return 0;
}
 