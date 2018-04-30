//reverse a number
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int m=n,d,rev=0;
while(m!=0)
{
d=m%10;
rev=rev*10+d;
m/=10;
}

printf("Reversed number :%d\n",rev);








return 0;
}
