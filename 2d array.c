#include<stdio.h>

int main(){
	int a,b,c,d,i,j;
	int ar[10][10],br[10][10],ans[10][10];
	
	printf("Enter the order of matrix A : ");
	scanf("%d %d",&a,&b);
	printf("Enter the order of matrix B : ");
	scanf("%d %d",&c,&d);
	
	if(b!=d){
		printf("This sum of matrix not possible");
		return 0;
	}else{
	
	printf("Enter the element A matrix : ");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&ar[i][j]);
			
		}
	}	printf("Enter the element B matrix : ");
	for(i=0;i<c;i++){
		for(j=0;j<d;j++){
			scanf("%d",&br[i][j]);
			
		}
	}

	
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			ans[i][j]=ar[i][j]+br[i][j];
		}
	}
	printf("Matrix Answer\n");
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			printf("%d\t",ans[i][j]);
		}
		printf("\n");
	}
}
	
	return 0;
	
}
