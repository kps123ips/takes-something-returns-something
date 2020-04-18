#include<stdio.h>
int add(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}
int add(int,int);
void main()
{
	int x,y,res;
	printf("Enter two numbers");
	scanf("%d%d",&x,&y);
	res=add(x,y);
	printf("Sum of two number is %d",res);
	getch();
}
