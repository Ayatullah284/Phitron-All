#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    printf("%d%d%d%d", N % 10, (N / 10) % 10, (N % 1000) / 100, N / 1000);

    return 0;
}
