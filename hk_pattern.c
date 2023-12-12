#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    /**int i, j;
    int len = 2*n-1;
    int min1, min2, min;
    for(i = 1; i<= len; i++){
        for (j = 1; j<= len; j++) {
            min1 = i<len-i? i-1:len-i;
            min2 = j<len-j? j-1:len-j;
            min = min1<=min2?min1:min2;
            printf("%d ",n-min);
        }
        printf("\n");
    }**/
    int size = 2 * n - 1, start = 0, end = size - 1;
    int arr[size][size];
    for (int k = n; k > 0; k--)
    {
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                arr[i][j] = n;
            }
        }
        start++;
        end--;
        n--;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}