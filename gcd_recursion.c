//gcd with recursion
#include<stdio.h>
int gcd(int a,int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}
int main()
{

int a,b;
scanf("%d %d",&a,&b);
int big,sm;
big=a>b?a:b;
sm=a<b?a:b;
if(a==b)
printf("GCD is %d\n",a);
else
printf("GCD is %d\n",gcd(big,sm));

return 0;
}
