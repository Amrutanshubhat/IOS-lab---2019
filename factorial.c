#include<stdio.h>
int main()
{
int i,num,j;
printf("enter the num");
scanf("%d",&num);
for(i=1;i<num;i++)
	j=j*i;
printf("the factorial of %d is %d\n",num,j);
}
