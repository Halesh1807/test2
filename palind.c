#include<stdio.h>  
void palindrome()    
{    
int n,r,sum=0,temp;    
printf("\nenter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("\npalindrome number ");    
else    
printf("not palindrome");   
//return 0;  
}
