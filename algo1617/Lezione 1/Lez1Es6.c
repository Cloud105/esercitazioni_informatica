#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    int n, m;
    scanf("%d%d", &n, &m);
    swap(&n, &m);
    printf("%d\n%d", n, m);
    
    return 0;
}