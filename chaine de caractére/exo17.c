#include <stdio.h>

int main() {
    int N;
    printf("Taille : "); scanf("%d", &N);
    int T[100];
    for(int i=0; i<N; i++) { printf("T[%d] : ", i); scanf("%d", &T[i]); }

    printf("\nAVANT : ");
    for(int i=0; i<N; i++) printf("%d ", T[i]);

    // Decalage GAUCHE
    if(N > 1) {
        int temp = T[0]; // Sauvegarde du premier
        for(int i=0; i < N-1; i++) {
            T[i] = T[i+1]; // Tout le monde avance d'un cran vers la gauche
        }
        T[N-1] = temp; // Le premier passe a la derniere place
    }

    printf("\nAPRES : ");
    for(int i=0; i<N; i++) printf("%d ", T[i]);
    return 0;
}
