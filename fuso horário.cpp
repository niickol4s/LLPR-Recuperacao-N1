#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int S;
    int T;
    int F;
    int TOTAL;
    
    printf("Fuso Horário\n\nInforme: \n");
    
    printf("\nHorário de saída: ");
    scanf("%d", &S);
    
    printf("\nTempo de viagem: ");
    scanf("%d", &T);
    
    printf("\nFuso do destino: ");
    scanf("%d", &F);
    
    TOTAL = S + T + F;
    
    if(TOTAL>=24) TOTAL-=24;
    
    if(TOTAL<0) TOTAL+=24;
    
    printf("\nHora local prevista no destino: %d hora(s)", TOTAL);
	return 0;
}
