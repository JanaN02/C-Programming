#include<stdio.h>
#include<string.h>

void norcal(void);
void flacal(void);
void cutofcal(void);
void percal(void);

int main()
{
	int cho;
	printf("\n\n\t\t\t\t\tVarious Calculator");
	
	
	printf("\n\n\n\t\tMENU : ");
	printf("\n\n\t\t\t1,Normal Calculator");
	printf("\n\t\t\t2,Flames Calculator");
	printf("\n\t\t\t3,Cutoff Calculator");
	printf("\n\t\t\t4,Student mark Percentage Calculator");
	printf("\n\n\n\n\t\t>> Enter Your Choice : ");
	scanf("%d",&cho);
	switch(cho){
		case 1:
			norcal();
			break;
		case 2:
		    flacal();
			break;
		case 3:
		    cutofcal();
			break;
		case 4:
		    percal();
			break;			
	}
}

void flacal(void){

	int a,b,c=0,l=0,i,j,k,ch,u,po,op;
	char y[20],p[20];
	system("cls");
	printf("\n\n\t\t\t\t\tFLAMES Calculator ");
	printf("\n\n\t\t>> Enter your name : ");
	scanf("%s",y);
	printf("\n\t\t>> Enter your Partner name : ");
	scanf("%s",p);
	a=strlen(y);
	b=strlen(p);
	a=a+b;
		for(i=0;i<b;i++)
		{
			for(j=0;j<strlen(y);j++)
			{
				if(p[i]==y[j])
				{
					c++;
					l=0;
					for(k=0;k<=strlen(y);k++)
					{
					if(k==j)
					{continue; }
					else
					{
						y[l]=y[k];		
						l++;
					} } break;
				}
			}
		}
		printf("\n\n");
		printf("\t\t\t\t>> The Flames Result Is: ");
			ch=a-2*c;
		if(ch==3||ch==5||ch==14||ch==16||ch==18||ch==21||ch==23)
			printf("Friends\n");
		else if(ch==10||ch==19)
			printf("Lovers\n");
		else if(ch==8||ch==12||ch==13||ch==17||ch==28)
			printf("Attraction\n");
		else if(ch==6||ch==11||ch==15||ch==26)
			printf("Marriage\n");
		else if(ch==2||ch==4||ch==7||ch==9||ch==20||ch==22||ch==24||ch==25)
			printf("Enemy\n"); 
		else if(ch==1||ch==27)
			printf("Sister\n"); 
		else
			printf("The names are in same!!\n");
		printf("\n\n\n\t\t>> Back to home page (Enter 4)  \n\n\t\t>> Continue this calculator (Enter 6) \n\n\t\t>> Exit (Enter any number) : ");
    scanf("%d",&op);
    if(op==4){
	
        system("cls");
    	main();
	}else if(op==6){
		    system("cls");
	       cutofcal();
		}else{
		
			printf("\n\n\t\t\tThank You!\n\n");
		}

return 0;
}
void norcal(void){
	int a,b,ch,u,op;
	system("cls");
	printf("\n\n\t\t\t\t\tNormal Calculator");
	printf("\n\n\t\t>> Enter your values (a,b): ");
	scanf("%d %d",&a,&b);
	
	printf("\n\n\t\t\t\t>> Menu \n\n\t\t\t\t\t1,Addition \n\t\t\t\t\t2,Substraction \n\t\t\t\t\t3,Multiplication \n\t\t\t\t\t4,Division \n\t\t\t\t\t5,Module");
	printf("\n\n\n\t\t\t\t >> Enter your choice : ");
	scanf("%d",&ch);
	
	
	switch(ch){
		case 1:
			printf("\n\t\t\t[ Answer : %d ]",a+b);
			break;
		case 2:
			printf("\n\t\t\t[ Answer : %d ]",a-b);
			break;
		case 3:
		    printf("\n\t\t\t[ Answer : %d ]",a*b);
			break;
		case 4:
		    printf("\n\t\t\t[ Answer : %d ]",a/b);
			break;
		case 5:
		    printf("\n\t\t\t[ Answer : %d ]",a%b);
			break;
		
	}
	 	printf("\n\n\n\t\t>> Back to home page (Enter 4)  \n\n\t\t>> Continue this calculator (Enter 6) \n\n\t\t>> Exit (Enter any number) : ");
    scanf("%d",&op);
    if(op==4){
	
        system("cls");
    	main();
	}else if(op==6){
		    system("cls");
	       cutofcal();
		}else{
		
			printf("\n\n\t\t\tThank You!\n\n");
		}
	 
	 return 0;
}
void cutofcal(void){
	
	int phy,che,mat,bio,medi,engi,u,op;
	system("cls");
	printf("\n\n\t\t\t\t\tCutoff Calculator");
	printf("\n\n\n\t\t>> Enter your four subject (PHY,CHE,BIO,MAT) marks : ");
	scanf("%d %d %d %d",&phy,&che,&bio,&mat);
	
	medi=mat+(phy/2+che/2);
	engi=mat+(phy/2+che/2);
	
	printf("\n\n\t\t>> The Engineering cutoff mark is : %d\n",engi);
	printf("\n\t\t>> The Medical cutoff mark is : %d",medi);
	printf("\n\n\n\t\t>> Back to home page (Enter 4)  \n\n\t\t>> Continue this calculator (Enter 6) \n\n\t\t>> Exit (Enter any number) : ");
    scanf("%d",&op);
    if(op==4){
	
        system("cls");
    	main();
	}else if(op==6){
		    system("cls");
	       cutofcal();
		}else{
		
			printf("\n\n\t\t\tThank You!\n\n");
		}
	
	return 0;

}
void percal(void){
	
	int phy, chem, bio, math, comp,u,op; 
    float per; 

    system("cls");
    printf("\n\n\t\t\t\t\tStudent mark percentage Calculator");
    printf("\n\n\t\t\t>> Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);

    per = (phy + chem + bio + math + comp) / 5.0;

    printf("\n\n\t\t\t>> Percentage = %.2f\n", per);

    if(per >= 90)
    {
        printf("\n\t\t\t>> Grade A");
    }
    else if(per >= 80)
    {
        printf("\n\t\t\t>> Grade B");
    }
    else if(per >= 70)
    {
        printf("\n\t\t\t>> Grade C");
    }
    else if(per >= 60)
    {
        printf("\n\t\t\t>> Grade D");
    }
    else if(per >= 40)
    {
        printf("\n\t\t\t>> Grade E");
    }
    else
    {
        printf("\n\t\t\t>> Grade F");
        
    }
    printf("\n\n\n\t\t>> Back to home page (Enter 4)  \n\n\t\t>> Continue this calculator (Enter 6) \n\n\t\t>> Exit (Enter any number) : ");
    scanf("%d",&op);
    if(op==4){
	
        system("cls");
    	main();
	}else if(op==6){
		    system("cls");
	       cutofcal();
		}else{
		
			printf("\n\n\t\t\tThank You!\n\n");
		}
	
    return 0;
}

