#include<stdio.h>

int main()
{
	int a[20],i,x,n;
	printf("How Many Elements : ");
	scanf("%d",&n);
	printf("Enter your elements : ");
	
	for(i=0;i<n;i++){
	
	      
		  scanf("%d",&a[i]);}
	      printf("Finding elements : ");
	      scanf("%d",&x);
	      for(i=0;i<n;i++)
		  
	      	if(x==a[i])
			  break;
	      	if(i<n)	
			
			  	printf("Element Founded : %d",i);
			  	
			 else
			 
			  	printf("Element Not Founded");
		

		
	
	return 0;
}
