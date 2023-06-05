#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements in the fibonacci series: ");
    scanf("%d", &n);

    int series[n], sum = 0, a = 1, b = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
           series[0] = series[1]= 1;
        }
        else
        {
            series[i] = series[i-1] + series[i-2];
        }
    }
    
    int length = sizeof(series)/sizeof(series[0]);

    for (int j = 0; j < length; j++)
    {
        printf("%d\n", series[j]);
    }

    return 0;
}