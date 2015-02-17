#include<stdio.h>
#include<conio.h>
  
int main()
{
    int t,k,n,i,j,l;
    int numb=0,m;
    long int a[100];
    scanf("%d",&t);
    while(t--)
    {
     numb=0;
     scanf("%d",&n);
     
     for(i=1;i<=n;i++) {
     scanf("%d",&a[i]); 
     }
     scanf("%d",&k);
    
     for(i=1;i<=n;i++){
     if(a[i]<=a[k])
     numb++;
     }
     printf("%d\n",numb);
    }
getch();                          
return 0;
}
