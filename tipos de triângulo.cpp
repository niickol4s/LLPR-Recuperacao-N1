#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	double a;
    double b;
    double c;
    double A;
    double B;
    double C;
    
    printf("Tipos de Triângulo\n\nInsira os valores dos vértices do triângulo: ");
    
    printf("\nPrimeiro lado: ");
    scanf("%lf", &a);
    
    printf("\nSegundo lado: ");
    scanf("%lf", &b);
    
    printf("\nTerceiro lado: ");
    scanf("%lf", &c);
    
    if(a>=b&&a>=c) {
        A=a;
        B=b;
        C=c;
    }
	
	if(b>=a&&b>=c) {
        A=b;
        B=a;
        C=c;
    }
    
    if(c>=b&&c>=a) {
        A=c;
        B=b;
        C=a;
    }
    
    if(A>=B+C) {
        printf("\nNão forma triângulo.");
    } else {
        if((A*A)==(B*B)+(C*C)) {
            printf("\nTriângulo retângulo");
        }
        if((A*A)>(B*B)+(C*C)) {
            printf("\nTriângulo obtusângulo");
        }
        if((A*A)<(B*B)+(C*C)) {
            printf("\nTriângulo acutangulo");
        }
        if((A==B)&&(B==C)&&(C==A)) {
            printf("\nTriângulo equilátero");
        }
        if((A==B&&A!=C)||(B==C&&B!=A)||(C==A&&C!=B)) {
            printf("Triãngulo isósceles");
        }
    }
    
	
	
	return 0;
}
