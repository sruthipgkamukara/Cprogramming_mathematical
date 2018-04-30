//generate armstrong numbers from 1 to n
#include<stdio.h>
int isArmstrong(int n)
{
int m=n,d,arm=0;
while(m!=0)
{
d=m%10;
arm+=(d*d*d);
m/=10;

}
if(arm==n)
return 1;
return 0;


}
int main()
{
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(isArmstrong(i))
printf("%d	",i);


}
printf("\n");
return 0;
}
