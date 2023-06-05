#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, i, num, sum = 0;
    
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL){
        exit(0);
    }
    else {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num);
            *(arr+i) = num;
        }

        for (i = 0; i < n; ++i) {
            sum += *(arr+i);
        }

        printf("%d", sum);
        
    }

    
    return 0;
}