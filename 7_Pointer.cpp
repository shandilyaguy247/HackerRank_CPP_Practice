#include <stdio.h>

void update(int *x,int *y) {
    int sum, diff;
    sum = *x + *y;
    diff = *x - *y;
    if (diff < 0)
    {
        diff = diff * (-1);
    }
    *x = sum;
    *y = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
