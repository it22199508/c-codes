#include<stdio.h>
int main()
{
	char name[10];
	char grade;
	int index;
	
	printf("Enter Your Name:\n");
	scanf("%s",&name);
	printf("Enter Your Grade:\n");
	scanf(" %c",&grade);
	printf("Enter Your Index:\n");
	scanf("%d",&index);
	printf("\n%s %c %d \n",name,grade,index);
	
	return 0;
	
	
}