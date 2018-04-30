//magic number - digitSum * rev(digitSum) == number
#include<stdio.h>
int digitSum(int n)
{
int m=n,d,sum=0;
while(m!=0)
{
d=m%10;
sum+=d;
m/=10;

}
return sum;
}

int reverse(int n)
{
int m=n,rev=0,d;
while(m!=0)
{
d=m%10;
rev=rev*10+d;
m/=10;

}

return rev;

}

int main()
{
int num;
scanf("%d",&num);
if(digitSum(num)*reverse(digitSum(num)) == num)
printf("%d is magic number \n",num);
else
printf("No magic at all!!!\n");
return 0;

}
