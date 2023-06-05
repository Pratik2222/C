#include <stdio.h>

void update(int *a,int *b) {
    int add = 0, diff = 0;

    add = *a + *b;

    diff = *a - *b;

    *a = add;
    if(diff < 0){
        *b = (-1)*diff;
    }
    else {
        *b = diff;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}