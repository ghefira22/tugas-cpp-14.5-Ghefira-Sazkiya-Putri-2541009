#include <stdio.h>
int main() {
    int A[12] = {60,80,55,90,75,40,50,85,70,65,45,55};
    int B[12] = {0}, C[12] = {0};
    int i, JB=0, JC=0;
    float total = 0, rata;

    for (i=0; i<12; i++) {
        total += A[i];
    }
    rata = total / 12;

    for (i=0; i<12; i++) {
        if (A[i] > rata)
            B[JB++] = A[i];
        else if (A[i] < rata)
            C[JC++] = A[i];
    }

    printf("Rata-rata = %.2f\n", rata);

    printf("Array A : ");
    for (i=0; i<12; i++) printf("%3d", A[i]);

    printf("\nArray B (di atas rata-rata) : ");
    for (i=0; i<JB; i++) printf("%3d", B[i]);

    printf("\nArray C (di bawah rata-rata) : ");
    for (i=0; i<JC; i++) printf("%3d", C[i]);

    return 0;
}
