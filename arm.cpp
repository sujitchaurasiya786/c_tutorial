#include<stdio.h>
int main(){
    int n,i,c=0,temp,r,f=1,arm=0;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
    int nn=n;
    for(i=n;n!=0;n=n/10){
        c++;
    }
    n=temp;
    int nc =c;
    for(i=n;n!=0;n=n/10){
        r=n%10;
//        printf("%d\n",r);
        for(c;c!=0;c--){
            f=f*r;
//            printf("%d\n",f);
        }
        arm=f+arm;
        f=1;
        c=nc;
    }
    if(arm==nn){
        printf("Armstrong Number");
    }
    else{
        printf("Not an Armstrong Number");
    }
    return 0;
}