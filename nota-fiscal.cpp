#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char produto1[18], produto2[18], produto3[18];
	float valor_p1, valor_p2, valor_p3;
	int qtd_p1, qtd_p2, qtd_p3;
	float imposto;
	
	float total, subtotal;
	
	printf("Criador de Nota Fiscal\n\n");
	printf("Nome do Produto: ");
	gets(produto1);
	printf("Valor do Produto: ");
	scanf("%f", &valor_p1);	
	printf("Quantidade do Produto: ");
	scanf("%d", &qtd_p1);
	fflush(stdin);	
	
	
	printf("\nNome do Produto: ");
	gets(produto2);
	printf("Valor do Produto: ");
	scanf("%f", &valor_p2);
	printf("Quantidade do Produto: ");
	scanf("%d", &qtd_p2);
	fflush(stdin);
	
	printf("\nNome do Produto: ");
	gets(produto3);
	printf("Valor do Produto: ");
	scanf("%f", &valor_p3);
	printf("Quantidade do Produto: ");
	scanf("%d", &qtd_p3);
	fflush(stdin);
	
	subtotal = valor_p1*qtd_p1 + valor_p2*qtd_p2 + valor_p3*qtd_p3;
	imposto = subtotal * 5.0 / 100.0;
	total = subtotal + imposto;
	
	system("cls");
	
	printf("|%-20s |%-18s |%-15s |%-15s|\n", "Produto", "Valor unitário", "Quantidade", "Preço Total");
	printf("|%-20s |R$ %15.2f |%-15d |R$ %12.2f|\n", produto1, valor_p1, qtd_p1, valor_p1*qtd_p1);
	printf("|%-20s |R$ %15.2f |%-15d |R$ %12.2f|\n", produto2, valor_p2, qtd_p2, valor_p2*qtd_p2);
	printf("|%-20s |R$ %15.2f |%-15d |R$ %12.2f|\n", produto3, valor_p3, qtd_p3, valor_p3*qtd_p3);
	printf("|%-20s |%-18s |%-15s |%-15s|\n", "", "", "", "");
	printf("|%-20s |%-18s |%-15s |R$ %12.2f|\n", "", "", "Subtotal", subtotal);
	printf("|%-20s |%-18s |%-15s |R$ %12.2f|\n", "", "Imposto (5%)", "", imposto);
	printf("|%-20s |%-18s |%-15s |%-15s|\n", "", "", "", "");
	printf("|%-20s |%-18s |%-15s |R$ %12.2f|\n", "", "", "Total", total);
	
	system("pause");
	return 0;
}
