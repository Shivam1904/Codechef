#include<stdio.h>
int main(){
long int n,i;
int p,q;
int a=0,b=0,x=0,max=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d", &p,&q);
a=a+p;
b=b+q;
        
if(a>b) {
        if((a-b)>= max){
        max=a-b;
        x=1;
        }
        }
else if(a<b) {
        if((b-a)>= max){
        max=b-a;
        x=2;
        }
        }       
p=a;
q=b;        
}     
printf("%d %d",x,max);
 
return 0;
}
 