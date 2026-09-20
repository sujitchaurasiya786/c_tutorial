//Compare Two Arrays without using built-in fuction
#include <stdio.h>
main()
{
    int n,i,same = 1;

    printf("Enter size: ");
    scanf("%d", &n);
	int a[n],b[n];
    printf("Enter first array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter second array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            same = 0;
            break;
        }
    }

    if (same == 1){
        printf("Both arrays are equal");
    }
    else
    {
        printf("Arrays are not equal");
    }
}