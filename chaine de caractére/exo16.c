#include <stdio.h>

int main() {
    int N1, N2;
    int T1[100], T2[100];

    printf("Taille T1 : "); scanf("%d", &N1);
    for(int i=0; i<N1; i++) { printf("T1[%d] : ", i); scanf("%d", &T1[i]); }

    printf("\nTaille T2 : "); scanf("%d", &N2);
    for(int i=0; i<N2; i++) { printf("T2[%d] : ", i); scanf("%d", &T2[i]); }

    printf("\nValeurs dans T1 et pas dans T2 : ");
    for(int i=0; i<N1; i++) {
        int present = 0;
        for(int j=0; j<N2; j++) {
            if(T1[i] == T2[j]) {
                present = 1;
                break;
            }
        }
        if(present == 0) {
            printf("%d ", T1[i]);
        }
    }
    return 0;
}
