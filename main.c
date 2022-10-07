/**
Link do git: https://github.com/amani47/Exercicio1/blob/main/main.c
Neste código pedimos para que o usuário insira as informações conforme os printf's
que foram colocados de forma organizada para que seja executado da maneira correta
desde que o usuário escolha as opções corretas. 
Foi importada a biblioteca math.h para facilitar os cálculos de potência e
raiz quadrada.

https://petbcc.ufscar.br/mathfuncoes/#pow
https://petbcc.ufscar.br/mathfuncoes/#sqrt

**/

#include <stdio.h>
#include <math.h>

int main()
{
    float primeiroNumero, segundoNumero, resultado;
    int operacao;

    printf("Amaní Barboza Vieira,\nAnálise e Desenvolvimento de Sistemas,\nUniversidade La Salle, matrícula 202211352\n");
    printf("\nDigite 1 (raiz quadrada) ou 2(soma, multiplicação, divisão e potenciação)\n");
    scanf("%d",&operacao);
    if(operacao == 1){
        printf("Digite o valor: ");
        scanf("%f", &primeiroNumero);
        return printf("O valor da raiz quadrada de %f é: %f", primeiroNumero,sqrt(primeiroNumero));
    } else if(operacao == 2) {
        printf("\nEscolha uma operação \n1: soma, \n2: multiplicacão, \n3: divisão, \n4: potenciação\n");
        scanf("%d",&operacao);
        
        switch (operacao) {
          case 1:
            printf("\nDigite o primeiro número:\n");
            scanf("%f", &primeiroNumero);
            printf("\nDigite o segundo número:\n");
            scanf("%f", &segundoNumero);
            printf("o resultado da soma é: %f", primeiroNumero + segundoNumero);
            break;
         case 2:
            printf("\nDigite o primeiro número:\n");
            scanf("%f", &primeiroNumero);
            printf("\nDigite o segundo número:\n");
            scanf("%f", &segundoNumero);
            printf("o resultado da multiplicação é: %f", primeiroNumero * segundoNumero);
          break;
           case 3:
            printf("\nDigite o primeiro número:\n");
            scanf("%f", &primeiroNumero);
            printf("\nDigite o segundo número:\n");
            scanf("%f", &segundoNumero);
            printf("o resultado da divisão é: %f", primeiroNumero / segundoNumero);
          break;
          case 4:
            printf("\nDigite o primeiro número:\n");
            scanf("%f", &primeiroNumero);
            printf("\nDigite o segundo número:\n");
            scanf("%f", &segundoNumero);
            printf("o resultado da potenciação é: %f", pow(primeiroNumero,segundoNumero));
            break;
          default:
            printf("opção inválida!!!!");
        }
        
    }else {
        return printf("opção inválida!!!!");
    }
    return 0;
}
