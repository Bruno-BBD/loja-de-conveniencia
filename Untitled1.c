#include <stdio.h>

int main() {
    char produto[50], opcao;
    int quant;
    float preco, total, totaldia = 0.0;

    printf("Controle de vendas di�rias.\n");

    opcao = 's';

    while(opcao == 's') {

        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", produto);


        printf("Digite a quantidade vendida: ");
        scanf("%d", &quant);


        printf("Digite o pre�o unit�rio: ");
        scanf("%f", &preco);


        total = quant * preco;


        printf("Produto: %s\n", produto);
        printf("Valor total da venda: R$ %.2f\n\n", total);


        totaldia += total;


        printf("Deseja registrar outra venda? (s/n): ");
        scanf(" %c", &opcao);

    }

    printf("\nValor total di�rio arrecadado: R$ %.2f\n", totaldia);

    return 0;
}
