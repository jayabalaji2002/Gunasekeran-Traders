#include<stdio.h>
int main()
{
	//getting input from user Decleration variables
	/* n=>No of Bags, price_per_bag=> Price of Per bags,user_rent=> Rental fee,customer_name=> Customer Name,customer_town_name=> Custome town name,
	commission_amount=> Commission amount of user getting,a=> getiing seperate Kgs in bags */	
	int n,price_per_bag,commission_amount,user_rent,a[300];
	char customer_name[50],customer_town_name[50];
	
	//Decleration variables and values its self 
	/* i=>for array loop intial declare,casting_wages=> Yarakku kooli,(n)weight_wages=> Yadai kooli,excess=> After + -, ans=> mid final ans in kerayam*/
	int i,casting_wages=5,weight_wages=7,ans,commission=0,excess=0;
	
	//Other Purposes
	/* neg_pos=> Changing some answers negative into positive,quotient=>Quotient for if(+),rem=> in + kgs they find how many bags include*/
	
	int  neg_pos,quotient,b,final_Answer,rem;
	float excess2;
	
	//start
	
	//getting Name of Customer
	printf("Enter Customer name: ");
	gets(customer_name);  	
	//getting City_Name of Customer
	printf("Enter Customer city name: ");
	gets(customer_town_name); 
	
	//No of Bags
	printf("Enter No of Bags: ");
    scanf("%d",&n);
    //getting price bag price
    printf("Enter Price_per_bag: ");
    scanf("%d",&price_per_bag);
    
    //Rental fee
    printf("Enter Vadagai Amount: ");
    scanf("%d",&user_rent); 
    
    
    //getting each bag kgs
    for(i=0;i<n;i++)    
    {
    	printf("Enter Array Value of a[%d]: ",i);
        scanf("%d",&a[i]);
	}
    //Seperate Kgs
    for(i=0;i<n;i++)
    { 
        if(a[i]>38)
        {
            excess+=a[i]-38;
        }
        else if(a[i]<38)
        {
            excess-=38-a[i];
        }
    }
    //Print Customer Name & Town name
    puts(customer_name);
    puts(customer_town_name);
    
    //print Excess Kgs
    printf("Excess Kg: %d",excess);
    
    //after excess kgs finding(kerayam)
    //if excess is (-)
   if(excess<38)
    {
        //Transfering negative into positive
        excess=excess*-1;
        //printf("\npos: %.1f",excess);      
		excess2=(float)excess/37-n;
		excess2=excess2*-1;
		excess2=excess2*price_per_bag;
		printf("\nKerayam amount(-) is: %.2f",excess2); 	
    }
    
	//if excess is(+)
    else if(excess>38)
    {
        quotient=excess/37;
        //below code is total no of bags+excess bags
        quotient=n+quotient;
        //after excess bags eg. 4 + (35)
        rem=excess%37;
        //printf("\nExcess+No of Bags: %d\nExcess after: %d",n2,rem);
        //Kerayam for +ve
        excess2=rem/37+quotient*price_per_bag;
        printf("\nKerayam amount(+) is: %.0f",excess2);
    }
    
    //Subracting Commission
	commission=excess2/100*4;
	printf("\nCommissioned Amount is: %d",commission);
	ans=excess2-commission;
	printf("\nAfter Commissioned Amount is: %d",ans);	
	
	/*vadagai Amount*/
	ans=ans-user_rent;
	printf("\nAfter Sub Vadagai amount: %d",ans);
	
	/* Yarakku Kooli (casting_wages)*/
    casting_wages=n*casting_wages;
    ans=ans-casting_wages;
    printf("\nAfter Sub Yarakku Kooli: %d",ans);
    
    /* Yatthu Kooli (weight_wages)*/
	weight_wages=n*weight_wages;
	ans=ans-weight_wages;
	printf("\nAfter Sub Yatthu Kooli: %d",ans);
	
	/*The great final answer */
    final_Answer=ans;
    printf("\n-------The final answer is: %d--------",final_Answer);
	
						 
	return 0;  
}
