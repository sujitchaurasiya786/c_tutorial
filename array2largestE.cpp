//find the Second largest elements of array
#include<stdio.h>
main(){
	int n,i,a,sa;
	printf("Enter length of array :");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++){
		printf("Enter %d element :",i+1);
		scanf("%d",&ar[i]);
	}
	a=ar[0];
	sa=ar[0];
	for(i=0;i<n;i++){
		if(ar[i]>a){
			sa=a;
			a=ar[i];
		}
	}
	printf(" Second Largest element is : %d",sa);
}