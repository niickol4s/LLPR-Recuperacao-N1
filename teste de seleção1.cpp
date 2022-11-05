#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int A;
	int B;
	int C;
	int D;
	
	printf("Teste de Seleção 1\n\nInsira quatro valores: \n");;
	
	printf("\nPrimeiro valor: ");
	scanf("%d", &A);
	
	printf("\nSegundo valor: ");
	scanf("%d", &B);
	
	printf("\nTerceiro valor: ");
	scanf("%d", &C);
	
	printf("\nQuarto valor: ");
	scanf("%d", &D);
	
	if((B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0) && (D > 0) && (A % 2 == 0)) {
        printf("\nValores aceitos.");
    } else {
    	printf("\nValores não aceitos.");
	}
	return 0;
}
