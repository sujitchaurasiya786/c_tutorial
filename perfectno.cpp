#include<stdio.h>
main(){
	int n,f,i,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		printf("Number is perfect");
	}
	else{
		printf("Number is not perfect");
	}
}