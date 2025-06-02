#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declaração de variáveis
    int num1, num2, num3;
    
    // Entrada de dados
    printf("Calculadora Multifuncional:\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    
    // Operações aritméticas
    printf("\nOPERADORES ARITMETICOS:\n");
    printf("Soma: %d + %d + %d = %d\n", num1, num2, num3, num1 + num2 + num3);
    printf("Subtracao: %d - %d - %d = %d\n", num1, num2, num3, num1 - num2 - num3);
    printf("Multiplicacao: %d * %d * %d = %d\n", num1, num2, num3, num1 * num2 * num3);
    
    // Tratamento da divisão
    if (num3 != 0) {
        printf("Divisao: %d / %d = %.2f\n", num1, num3, (float)num1 / num3);
    } else {
        printf("Divisao: Nao e possivel dividir por zero!\n");
    }
    
    // Operadores relacionais
    printf("\nCOMPARACOES RELACIONAIS:\n");
    printf("%d > %d ? %s\n", num1, num2, num1 > num2 ? "Verdadeiro" : "Falso");
    printf("%d == %d ? %s\n", num2, num3, num2 == num3 ? "Verdadeiro" : "Falso");
    
    // Operadores lógicos
    bool condicao1 = num1 > 0;        // Primeiro número é positivo
    bool condicao2 = num2 % 2 == 0;   // Segundo número é par
    
    // Uso das condições
    if (condicao1 && condicao2) {
        printf("\nCondicao especial atendida: O primeiro numero (%d) e positivo E o segundo (%d) e par!\n", num1, num2);
    } else {
        printf("\nCondicao especial nao atendida.\n");
    }
    
    return 0;
}