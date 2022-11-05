#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float N1;
    float N2;
    float N3;
    float N4;
    float N5;
    float MEDIA;
    float MF;
    
    printf("Média 3\n\nInsira as quatro notas do(a) aluno(a): \n");
    
    printf("\nInsira a primeira nota: ");
    scanf("%f", &N1);
    
    printf("\nInsira a segunda nota: ");
    scanf("%f", &N2);
    
    printf("\nInsira a terceira nota: ");
    scanf("%f", &N3);
    
    printf("\nInsira a quarta nota: ");
    scanf("%f", &N4);
    
    MEDIA=(N1*2+N2*3+N3*4+N4*1)/10;
    
    if(MEDIA>=7) {
        printf("\nMédia: %.1f\nAluno aprovado.\n", MEDIA);
        
    } else if (MEDIA<5){
    	printf("\nMédia: %.1f\nAluno reprovado.\n", MEDIA);
	} 
    
    if((MEDIA>=5) && (MEDIA<7)) {
        scanf("%f", &N5);
        printf("Média: %.1f\n", MEDIA);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", N5);
        MF=(N5+MEDIA)/2;
        
        if(MF>=5) {
            printf("Aluno aprovado.\n");
        } else {
        	printf("Aluno reprovado.\n");
		}
        
        printf("Média final: %.1f\n", MF);
    }
	return 0;
}
