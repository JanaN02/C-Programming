#include<stdio.h>

int main()
{
	
	char pla[30],opt[40],nam[20];
	int k,pho,ch,car,cho,amo;
	
	
	
	
	
	printf("Welcome To Our AXIS Bookings !\n");
	
	printf("\n>SIGN IN\n");
	printf("\nEnter Your Name : ");
	fgets(nam,20,stdin);
	printf("\nEnter you mobile number : ");
	scanf("%d",&pho);

	
	printf("\nMenu : \n 1,BUS BOOKING \n 2,CAR BOOKING \n 3,ANOTHER OPTIONS");
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&ch);
	
	switch(ch){
		
	case 1:
		printf("\nWhich Place You Go : ");
		scanf("%s",pla);
		printf("\nOptions: \n >1,A/C \n >2,Non A/C");
		printf("\nEnter Your Option :");
		scanf("%d",&cho);
		if(cho==1){
			printf("\nPrize : 5000 rupees");
		}else{
			printf("\nPrize : 3000 rupees");
		}
		printf("\nPay The Amount :");
		printf("\n >1,G-PAY \n >2,Phonepe \n >3,Others");
		printf("\n\nSelect any one option: ");
		scanf("%d",&amo);
		printf("\nSend link message on your number ,  pay your amounts");
		
		break;
	case 2:
	    printf("\nAvailable cars: \n 1,Maruti \n 2,Audi \n 3,Others ");
		printf("\nWhich Car You Want : ");
		scanf("%d",&car);
		printf("\nWhich (KM) you go : ");
		scanf("%d",&k);
		if(k>=50){
			printf("\nAmount 5000 rupees");
		}else if(k>+30){
			printf("\nAmount 3000 rupees");
		}else 
		{
			printf("\nAmount 1500 rupees");
		}
		
		printf("\nPay The Amount :");
		printf("\n >1,G-PAY \n >2,Phonepe \n >3,Others");
		printf("\n\nSelect any one option: ");
		scanf("%d",&amo);
		printf("\nSend link message on your number ,  pay your amounts");
		break;
		
	case 3:
		printf("\nWhat Services You Want Her : ");
		scanf("%s",opt);
		
		printf("\nThis Services Not Available Her! Sorry For Inconvenience");
		printf("\nWe will update soon! Stay Tuned..");
	return 0;
	}
	printf("\nThanks For Your Booking!");

	
	return 0;
	
}
	

