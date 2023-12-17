#include<stdio.h>
int main()
{
/*	int a=1;
	switch(a)
	{
		case 1:printf("Number 1\n");
		break;
		case 2:printf("Number 2\n");
		break;
		case 3:printf("Number 3\n");
		break;
		case 4:printf("Number 4\n");
		break;
		default:printf("Error");
		
	} */
	
	char x='+';
	int a=10,b=5;
	
	switch(x)
	{
		case '+':printf("%d\n",a+b);
		break;		
		case '-':printf("%d\n",a-b);
		break;
		case '*':printf("%d\n",a*b);
		break;
		case '/':printf("%d\n",a/b);
		break;
		default:printf("Error");
		
	}
	
	return 0;
}