#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct Empresa{

    char nome[100];
    int idade;
    char sexo;
    char CPF[15];
    char datadenascimento[10];
    int codigo;
    char cargo[30];
    float salario;
};

void dados(struct Empresa *empresa){

    printf("Digite os dados do funcionario: \n");

    printf("nome: ");
    gets(empresa -> nome);
    setbuf(stdin,NULL);

    printf("Cargo: ");
    gets(empresa -> cargo);
    setbuf(stdin,NULL);

    printf("CPF: ");
    gets(empresa -> CPF);
    setbuf(stdin,NULL);

    printf("Data de nascimento: ");
    gets(empresa -> datadenascimento);
    setbuf(stdin,NULL);

    printf("idade: ");
    scanf("%d", &empresa -> idade);
    setbuf(stdin,NULL);

    printf("sexo: ");
    scanf("%c", &empresa -> sexo);
    setbuf(stdin,NULL);

    printf("Codigo: ");
    scanf("%d", &empresa -> codigo);
    setbuf(stdin,NULL);

    printf("Salario: ");
    scanf("%f", &empresa -> salario);
    setbuf(stdin,NULL);

}

int main(){

    struct Empresa empresa;

    dados(&empresa);

    printf("\nDados do funcionário:\n");
    printf("\nNome: %s\n", empresa.nome);
    printf("Idade: %d\n", empresa.idade);
    printf("Sexo: %c\n", empresa.sexo);
    printf("CPF: %s\n", empresa.CPF);
    printf("Data de Nascimento: %s\n", empresa.datadenascimento);
    printf("Código do Setor: %d\n", empresa.codigo);
    printf("Cargo: %s\n", empresa.cargo);
    printf("Salário: %.2f\n", empresa.salario);
}
