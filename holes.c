#include<stdio.h>
int main() {
    char str[100];
    int x,i,j,k;
    scanf("%d",&x);
    
    for(i=0;i<x;i++){
    k=0;
        scanf("%s",&str);
        int len=strlen(str);
       for(j=0;j<len;j++){
         if(str[j]=='A' || str[j]== 'D' ||str[j]== 'O' || str[j]== 'P' || str[j]=='R' || str[j]=='Q')
         k++;
         else if (str[j]=='B')
         k=k+2;
         }
         printf("%d \n",k);
        }  
       return 0;
}
 