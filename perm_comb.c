//a to find npr
//b to find ncr
#include<stdio.h>
int fact(int n)
{
if(n<2)
return 1;
else
return n*fact(n-1);


}

int main()
{

int n,r;char ch;
scanf("%d %d %c",&n,&r,&ch);
switch(ch)
{

case 'a':
//npr
printf("%dp%d is %d\n",n,r,fact(n)/fact(n-r));
break;
case 'b':
printf("%dC%d is %d\n",n,r,fact(n)/(fact(r)*fact(n-r)));
break;

}


return 0;
}
