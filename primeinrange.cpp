//prime number in range.....
#include<stdio.h>
main(){
    int start,end,c,i,j;
    printf("Enter start:");
    scanf("%d", &start);
    printf("Enter End:");
    scanf("%d", &end);
    for(i=start;i<=end;i++)
    {
        c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
            printf("%d ",i);
    }
}  