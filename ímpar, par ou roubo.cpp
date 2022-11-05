#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int p;
    int j1;
    int j2;
    int r;
    int a;
    int SOMA;
    int RESULTADO;
    
    printf("Ímpar, Par ou Roubo\n\nEscolha entre Ímpar ou Par: \n");
    
    scanf("%d", &p);
      
    scanf("%d", &j1);
    
    scanf("%d", &j2);
    
    scanf("%d", &r);
    
    scanf("%d", &a);
    
    if(r) {
        if(a)printf("Jogador 2 ganha!\n");
        else printf("Jogador 1 ganha!\n");
    }else {
        if(a)printf("Jogador 1 ganha!\n");
        else {
            SOMA = j1 + j2;
            if(SOMA%2) RESULTADO = 0;
            else RESULTADO = 1;
            if(RESULTADO == p) {
                printf("Jogador 1 ganha!\n");
            }else {
                printf("Jogador 2 ganha!\n");
            }
        }
    }
    
	return 0;
}
