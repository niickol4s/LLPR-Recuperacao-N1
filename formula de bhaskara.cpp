#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	double A;
    double B;
    double C;
    double DELTA;
    double R1;
    double R2;
    
    printf("F�rmula de Bhaskara\n\nInsira os coeficientes da equa��o: \n");
    
    printf("\nInsira o primeiro coeficiente: ");
    scanf("%lf", &A);
    
    printf("\nInsira o segundo coeficiente: ");
    scanf("%lf", &B);
    
    printf("\nInsira o terceiro coeficiente: ");
    scanf("%lf", &C);
    
    DELTA = (B * B) - 4 * A * C;
    
    R1 = (- B + sqrt(DELTA)) / (2 * A);
    
    R2 = (- B - sqrt(DELTA)) / (2 * A);
    
    if(A != 0 && DELTA > -1) {
        printf("\nPrimeira ra�z = %.5lf\n\nSegunda ra�z = %.5lf\n", R1, R2);
    } else {
    	printf("\nImposs�vel calcular");
	}
	
	return 0;
}
