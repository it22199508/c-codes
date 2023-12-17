#include<stdio.h>
int main()
{
	int type,quantity;
	float price=0,discount=0,totalprice=0;
	
	printf("Enter Type:");
	scanf("%d",&type);
	
	if(type==1)
	{
		price=1000;
		printf("Enter Quantity:");
		scanf("%d",&quantity);
		
		if(quantity>3)
		{
			discount=price*quantity/100*10;
			totalprice=price*quantity-discount;
			printf("Enter Total Price:Rs.%.2f",totalprice);
		}
		else
		{
			totalprice=price*quantity;
			printf("Enter Total Price:Rs.%.2f",totalprice);	
		}
		
	}
    else if(type==2)
	{
		price=1600;
		printf("Enter Quantity:");
		scanf("%d",&quantity);
		
		if(quantity>3)
		{
			discount=price*quantity/100*12;
			totalprice=price*quantity-discount;
			printf("Enter Total Price:Rs.%.2f",totalprice);
		}
		else
		{
			totalprice=price*quantity;
			printf("Enter Total Price:Rs.%.2f",totalprice);	
		}
    }
    else if(type==3)
	{
		price=1400;
		printf("Enter Quantity:");
		scanf("%d",&quantity);
		
		if(quantity>3)
		{
			discount=price*quantity/100*15;
			totalprice=price*quantity-discount;
			printf("Enter Total Price:Rs.%.2f",totalprice);
		}
		else
		{
			totalprice=price*quantity;
			printf("Enter Total Price:Rs.%.2f",totalprice);	
		}
	}
	else
	printf("Invalid Input");
	
	return 0;
}