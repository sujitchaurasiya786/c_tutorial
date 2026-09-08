#include<stdio.h>
main(){
	int n,i,j,k;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--){
		for(j=n;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}