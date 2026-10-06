//Find Smallest Element in Matrix
#include <stdio.h>
main()
{
    int rows, columns, i, j;
    int arr[100][100];
    int smallest;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    smallest = arr[0][0];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }
    }

    printf("Smallest element = %d", smallest);
}
