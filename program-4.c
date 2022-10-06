#include<stdio.h>
int n;
int f1(int);
void main()
{
int res;
printf("S. Naveen Kumar Reddy \n191911494\n ");
printf("\n enter the number\t");
scanf("%d",&n);
res=f1(n);
printf("\n Factorial=%d",res);
}
int f1(n)
{
if(n==1)
return(n);
else
return(n*f1(n-1));
}
