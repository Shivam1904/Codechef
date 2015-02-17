#include<stdio.h>
#include<conio.h>
  
int main()
{
    int t,b,x;
    unsigned long int sum;
    scanf("%d",&t);
    while(t--)
    {
    sum=0;
              
    scanf("%d",&b);
                    
     if(b%2==0){
           b=b-2;
           x=b/2;
            while(x>0){
               sum=sum+x;
               x--;         }     
       
                }
                
      if(b%2!=0){
           b=b-3;
           x=b/2;
            while(x>0){
               sum=sum+x;
               x--;         }     
       
                }
       printf("%lu\n",sum);
                
                }           
getch();                          
return 0;
}
