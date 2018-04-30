//random numbers from 1 to 1000
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("Enter the number of random numbers needed :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
printf("%d\n",rand()%1000+1);


return 0;
}
