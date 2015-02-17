#include<stdio.h>
int main() {
    int t,n,x,i,j;
    int a[100];
    int min,numb1,numb2,output;   
    long int sum;
    scanf("%d",&t);
    while(t--){
               sum=0;
              scanf("%d %d ",&n,&x);
              for(i=0;i<n;i++){
                      scanf("%d",&a[i]);
                      sum=sum+a[i];
              }
              numb1=sum/x;
              min=a[0];
              for(j=1;j<n;j++){
                      if(min>a[j])
                      min=a[j];
                      }
              numb2=(sum-min)/x;
              
              if(numb1==numb2){
              output= -1;
              }
              else
              output=numb1;
              
              printf("%d\n",output);
    }
    
    
return 0;
}
