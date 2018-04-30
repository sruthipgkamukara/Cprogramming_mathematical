//roots of quadratic eqn
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
scanf("%f %f %f",&a,&b,&c);

float D=(b*b - 4*a*c);
if(D==0)
{
float root=0-(b/(2*a));
printf("Roots are equal and is %.2f\n",root);

}
else if(D>0)
{
float root1=(sqrt(D)-b)/(2*a);
float root2=0-(sqrt(D)+b)/(2*a);
printf("Roots are unequal and are %.2f and %.2f\n",root1,root2);

}
else
{
float real=0-(b/(2*a));
float imag=sqrt(0-D)/(2*a);
printf("Roots are imaginary\n");
if(imag>0)
{
printf("root1 : %.2f + %.2f i\n",real,imag);
printf("root2 : %.2f - %.2f i\n",real,imag);
}
else
{
printf("root1 : %.2f  %.2f i\n",real,imag);
printf("root2 : %.2f + %.2f i\n",real,(0-imag));


}}

return 0;
}

