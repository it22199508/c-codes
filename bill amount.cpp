#include<stdio.h>
int main()
{
	int ctype;
	float billamount=0,discount=0,finalbillamount=0;
	
	printf("Enter Customer Type:");
	scanf("%d",&ctype);
	
	if(ctype==1)
	{
		printf("Enter Bill Amount:Rs.");
		scanf("%f",&billamount);
		
		
	    if(billamount<=2000)
	    {
	        discount=billamount/100*15;
	        printf("Discount Amount:Rs.%.2f\n",discount);
	        finalbillamount=billamount-discount;
	        printf("Final Bill Amount:Rs.%.2f\n",finalbillamount);
	    }
	    else
	    {
	    	discount=billamount/100*25;
	    	printf("Discount Amount:Rs.%.2f\n",discount);
	        finalbillamount=billamount-discount;
	        printf("Final Bill Amount:Rs.%.2f\n",finalbillamount);
	    	
		}
	}
	else if(ctype==2)
	{
		printf("Enter Bill Amount:");
		scanf("%f",&billamount);
		
		
	    if(billamount>3000)
	    {
	        discount=billamount/100*15;
	        printf("Discount Amount:Rs.%.2f\n",discount);
	        finalbillamount=billamount-discount;
	        printf("Final Bill Amount:Rs.%.2f\n",finalbillamount);
	    }
	    else
	    {
	    	discount=0;
	    	printf("Discount Amount:Rs.%.2f\n",discount);
	        finalbillamount=billamount;
	        printf("Final Bill Amount:Rs.%.2f\n",finalbillamount);
	    	
		}
	}
	else
	{
	printf("Invalid Input\n");
	}
	
	return 0;
}