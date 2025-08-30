#include <stdio.h>

int main() {
    
    int matricula;
    printf("Digite a matrícula do aluno: ");
    scanf("%d", &matricula);
    int ano = matricula / 10000;
    int semestre = (matricula / 1000) % 10;
    int colocacao = matricula % 1000;
    printf("Ano: %d\nSemestre: %d\nColocação: %d", ano, semestre, colocacao);

    return 0;
}
