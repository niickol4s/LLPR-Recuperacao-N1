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
    
    printf("Tipos de Tri�ngulo\n\nInsira os valores dos v�rtices do tri�ngulo: ");
    
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
        printf("\nN�o forma tri�ngulo.");
    } else {
        if((A*A)==(B*B)+(C*C)) {
            printf("\nTri�ngulo ret�ngulo");
        }
        if((A*A)>(B*B)+(C*C)) {
            printf("\nTri�ngulo obtus�ngulo");
        }
        if((A*A)<(B*B)+(C*C)) {
            printf("\nTri�ngulo acutangulo");
        }
        if((A==B)&&(B==C)&&(C==A)) {
            printf("\nTri�ngulo equil�tero");
        }
        if((A==B&&A!=C)||(B==C&&B!=A)||(C==A&&C!=B)) {
            printf("Tri�ngulo is�sceles");
        }
    }
    
	
	
	return 0;
}
