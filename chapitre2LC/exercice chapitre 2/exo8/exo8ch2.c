#include <stdio.h>

int main() {
    int S, H = 0, M = 0, RS = 0;

    printf("Donner le temps en secondes: ");
    scanf("%d", &S);
    if (S >= 3600) {
        H = S / 3600;
        S = S - H * 3600;
    }
    if (S >= 60) {
        M = S / 60;
        S = S - M * 60;
    }
    if (S > 0) {
        RS = S;
    }
    printf("%d h : %d min : %d s\n", H, M, RS);
    return 0;
}
