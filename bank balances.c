#include<stdio.h>
int main (void)
{
	char transaction_type;
	float withdraw_amount,deposit_amount,balance,new_balance;
	
	     printf("input transaction type withdrawal or deposit | press W to withdrawal |press D to deposit ");
	     
	     transaction_type=getchar();
	     
	     if (transaction_type=='W' ||transaction_type=='w')
	     {
	     	printf("you have selected to withdraw money\n");
	     	printf("enter account balance=");
	     	scanf("%f",&balance);
	     	printf("enter withdraw amount=");
	     	scanf("%f",&withdraw_amount);
	     	new_balance=balance-withdraw_amount;
	     	printf("new balance is =%.2f",new_balance);
	     	
		 }
		 
		 else if (transaction_type=='D'|| transaction_type=='d')
		 {
		 	printf("you have selected to deposit money\n");
	     	printf("enter account balance=");
	     	scanf("%f",&balance);
	     	printf("enter deposit amount=");
	     	scanf("%f",&deposit_amount);
	     	new_balance=balance+deposit_amount;
	     	printf("new balance is =%.2f",new_balance);
		 }
		 else
		 {
		 	printf("you have selected an invalid transaction type\n");
		 	
		 	return 0;
		 }
	
}
