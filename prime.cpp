//check number is prime or not via function in C.
#include<stdio.h>
int isPrime(int n){
	int c=0,i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==0||c==1){
		printf("Number is 0 or 1.\n");
	}else if(c==2){
		printf("%d is prime.\n",n);
	}else{
		printf("%d is not prime number.\n",n);
	}
	
}

main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	isPrime(num);
}