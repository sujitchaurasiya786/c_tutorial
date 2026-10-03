//coil matrix..
#include<stdio.h>
main(){
	int i,j,n,num=0;
	printf("Enter a NUmber:");
	scanf("%d",&n);
	int arr[100][100];
	for(i=0;i<4*n;i++){
		for(j=0;j<4*n;j++){
			num++;
			arr[i][j]=num;
		}
	}
	for(i=0;i<4*n;i++){
		for(j=0;j<4*n;j++){
			num++;
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
}
