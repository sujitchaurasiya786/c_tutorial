//WAP to copy one string to other string using built-in function.
#include<stdio.h>
#include<string.h>
main(){
	char str1[50],str2[50];
	printf("Enter First String : ");
	gets(str1);
	strcpy(str2,str1);
	printf("Copied String : %s",str2);
}

