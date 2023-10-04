#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct{

    float salariofixo;
    float valortotaldevendas;
    float comissao;
    float salariofinal;

} funcionario1;

typedef struct{

    float salariofixo;
    float valortotaldevendas;
    float comissao;
    float salariofinal;

}funcionario2;

void dados1(funcionario1 *funcionario1){

    printf("Digite o valor do salario fixo: ");
    scanf("%f", &(funcionario1 -> salariofixo));

    printf("Digite o valor total de vendas: ");
    scanf("%f", &(funcionario1 -> valortotaldevendas));

    funcionario1 -> comissao = funcionario1 -> valortotaldevendas * 0.06;

    funcionario1 -> salariofinal = funcionario1 -> salariofixo + funcionario1 -> comissao;
    
}

void dados2(funcionario2 *funcionario2){

    printf("Digite o valor do salario fixo: ");
    scanf("%f", &(funcionario2 -> salariofixo));

    printf("Digite o valor total de vendas: ");
    scanf("%f", &(funcionario2 -> valortotaldevendas));

    funcionario2 -> comissao = funcionario2 -> valortotaldevendas * 0.06;

    funcionario2 -> salariofinal = funcionario2 -> salariofixo + funcionario2 -> comissao;
    
}

int main(){

    struct funcionario1 funcionario1;
    dados1(&funcionario1);

    printf("Dados do funcionario 1: \n");
    printf("Valor do salario fixo: %.2f \n", funcionario1.salariofixo);
    printf("Valor total de vendas: %.2f \n", funcionario1.valortotaldevendas);
    printf("Comissao: %.2f \n", funcionario1.comissao);
    printf("Salario final: %.2f \n", funcionario1.salariofinal);

    struct funcionario2 funcionario2;
    dados2(&funcionario2);

    printf("Dados do funcionario 2: \n");
    printf("Valor do salario fixo: %.2f \n", funcionario2.salariofixo);
    printf("Valor total de vendas: %.2f \n", funcionario2.valortotaldevendas);
    printf("Comissao: %.2f \n", funcionario2.comissao);
    printf("Salario final: %.2f \n", funcionario2.salariofinal);

    return 0;
}
