//Create a Student structure containing name and marks of 5 subjects. Calculate and display the total marks.
#include<stdio.h>
struct Student{
	char name[50];
	int math,phy,chem,hindi,eng;
};
main(){
	struct Student s1[5];
	for(int i=0;i<4;i++){
		fflush(stdin);
		printf("Enter Student Name : ");
		gets(s1[i].name);
		printf("Enter math marks : ");
		scanf("%d",&s1[i].math);
		printf("Enter Physics marks : ");
		scanf("%d",&s1[i].phy);
		printf("Enter Chemistry marks : ");
		scanf("%d",&s1[i].chem);
		printf("Enter Hindi marks : ");
		scanf("%d",&s1[i].hindi);
		printf("Enter English marks : ");
		scanf("%d",&s1[i].eng);
	}
	for(int i=0;i<4;i++){
		printf("Student Name : %s \n",s1[i].name);
		int total= (s1[i].math+s1[i].phy+s1[i].chem+s1[i].hindi+s1[i].eng);
		printf("Total Marks : %d\n",total);
	}
}