/*求一元二次方程的解！*/
#include<math.h>
#include<stdio.h>

int main()
{
    float a,b,c,disc,x1,x2,p,q;
     printf("Please enter a,b,c\n");
     scanf("%f%*c%f%*c%f%*c",&a,&b,&c);

     disc=b*b-4*a*c;
     p=sqrt(disc)/(2*a);//sqrt:sq root
     q=-b/(2*a);
     x1=q+p;
     x2=q-p;
     printf("x1=%7.4f,x2=%7.4f\n",x1,x2);
}
