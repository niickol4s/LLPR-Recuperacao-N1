#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int START;
    int END;
    int TIME;
    
    printf("Tempo de Jogo\n");
    
    printf("\nInsira o hor�rio de in�cio do jogo: ");
    scanf("%d", &START);
    
    printf("\nInsira o hor�rio de fim do jogo: ");
    scanf("%d", &END);
    
    if(START < END) {
        TIME = END - START;
        printf("\nO jogo durou %d hora(s)", TIME);
    } else {
    	TIME = (24 - START) + END;
        printf("\nO jogo durou %d hora(s)", TIME);
	}
	
	return 0;
}
