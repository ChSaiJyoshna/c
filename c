#include<stdio.h>
int main()
{
 int n,c,p;
 scanf("%d %d",&n,&p);
 c=n;
 while(n==0)
 {
  n=n-p*(n/100);
  c=c+n;
 }
 printf("%d",c);
 return 0;
 }
  
