#include<stdio.h>


int main(){
	
	int date,mon,year,n,i;
	char thi[100][100];
	float pri[100],bill;
	int qty[100];
	printf("Enter Date : ");
	scanf("%d %d %d",&date,&mon,&year);
	printf("\nHow many thing are buy : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		printf("\n\nEnter the %d item name=",i);
	    fflush(stdin);
        gets(thi[i]);
        printf("\nEnter the rate of %s =",thi[i]);
        scanf("%f",&pri[i]);
        printf("\nEnter the quantity of %s =",thi[i]);
        scanf("%d",&qty[i]);
        
	
	}
	
	
	printf("\n\t\t\t_______________ SK Cafio Corner _______________\n");
	
	printf("\nDate :%d / %d / %d ",date,mon,year);
	
	printf("\n\t\t\t- Order Details -");
	
	printf("\n\n\nS.NO\tItem name\tRate\tQuantity\tAmount");
	for(i=1;i<=n;i++){
		
		printf("\n\n%d\t%s\t\t%.2f\t%d\t\t%.2f",i,thi[i],pri[i],qty[i],pri[i]*qty[i]);
        bill+=(pri[i]*qty[i]);
	}
	printf("\n\n\t\t\tToatl Amount = %f",bill);
	printf("\n\n\n\n\t\t\t_______________ Thank You _______________");
	return 0;
}

