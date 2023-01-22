#include <stdio.h>

int main()
{

	int a,b,c,d,e,f,g,p,co;
	char ch;
    int amo =10000;
	int pass = 1234;
	int pho = 7094609923;
	
	printf("welcome to SBI");
	
	printf("\n\nEnter your password pin : ");
	scanf("%d",&p);

	if(p==pass){
		printf("OK DONE");
	}else {
		printf("Your password wrong");
		return 0;
	}
	
		
	printf("\n\nOPTIONS \n\n1,withdrawl amount \n2,check balance \n3,pin chnage \n4,deposit amount");
	printf("\n\nEnter your options : ");
	scanf("%d",&ch);
	
	switch(ch) {
		 3
	case 1:
			printf("\nEnter your amount : ");
			scanf("%d",&a);
			printf("\nsucess..... Take your amount");
			b=amo-a;
			printf("\nbalance is : %d",b);
			break;
			
	case 2:
			printf("\nYour balance is : %d",amo);
			break;
			
	case 3:
		
		printf("Enter your old pin : ");
		scanf("%d",&g);
		if(g==pass){
		printf("OK DONE");
	}else {
		printf("Your password wrong");
		return 0;
	}
	    printf("\nEnter your new pin : ");
		scanf("%d",&c);
		printf("\nEnter phone number : ");
		scanf("%d",&d);
		if(d==pho){
		printf("\nYour number is verified");
	}else {
		printf("\nYour number is wrong");
		return 0;
	}
	
		printf("\n\nEnter your 4 digit OTP : ");
		scanf("%d",&f);
		
		
		printf("\n\nSucessfully... Your pin changed");
		break;
		
	case 4:
		printf("\nEnter your amount : ");
		scanf("%d",&e);
		printf("\nYour amount is sucessfully deposited");
		printf("\nYours total balance is : %d",e+amo);
		break;
		
			
	
 }	
 
      printf("\n\nThank You");
      return 0;
		   
		   
}
	
	

	
	
		
