#include<stdio.h>   
int main()     
{     

int n,r,m=0,temp;     
printf("enter the number=");     
scanf("%d",&n);     
temp=n;     
while(n>0)     
{     
r=n%10;     
m=(m*10)+r;     
n=n/10;     
}     
if(temp==m)     
printf("pallindrome number ");     
else     
printf("not pallindrome");    
return 0;   
} 
