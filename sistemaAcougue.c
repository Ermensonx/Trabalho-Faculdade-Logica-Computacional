#include <stdio.h>
#include <locale.h>

int main(void)
{
    int tipoCarne;
    float estoque, quilos, custoProduto, vendaProduto, valorVenda, imposto, valorLiquido,
    lucro, estoqueAtual, valorCusto;

    setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("======================================================\n");
    printf("||SISTEMA DE CONTROLE DE VENDAS E ESTOQUE DE A�OUGUE|| \n");
    printf("======================================================\n");
    printf("\n");
    printf("TIPOS DE CARNES: \n\n 1 - Bovina \n 2 - Su�na \n 3 - Ave \n");
    printf("\n");
    printf("Escolha o n�mero do tipo de carne que deseja consultar: ");
    scanf("%d", &tipoCarne);
    printf("\n");
    
        if (tipoCarne == 1)
        {
            printf("==============================\n");
            printf("||VOC� ESCOLHEU CARNE BOVINA||\n");
            printf("==============================\n");
            printf("\n");
            printf("Quantos quilos o seu estoque de carne Bovina tinha ?\n");
            scanf("%f", &estoque);
            printf("Quantos quilos de carne Bovina voc� vendeu ?\n");
            scanf("%f", &quilos);

                if (quilos > estoque)//se inserir mais quilos que o dispon�vel no estoque o sistema se encerra
                {
                    printf("\n");
                    printf("Valor inv�lido! Reinicie o Sistema!\n");
                    return 0;
                }

            printf("Qual foi o valor de custo do quilo do seu produto ?\n");
            scanf("%f", &custoProduto);
            printf("Qual foi o valor de venda do quilo do seu produto ?\n");
            scanf("%f", &vendaProduto);
            printf("\n");

            printf("=========================\n");
            printf("||RESULTADO DA CONSULTA||\n");
            printf("=========================\n");
            printf("\n");

            valorCusto = (custoProduto * quilos);
            valorVenda = (vendaProduto * quilos);
            imposto = (valorVenda * 0.18) ;
            valorLiquido = (valorVenda - imposto);
            lucro = (valorLiquido - valorCusto);
            estoqueAtual = (estoque - quilos);

            printf("Seu imposto � de 18,00%%\n");
            printf("Seu valor de custo foi R$%2.2f\n", valorCusto);
            printf("O valor da sua venda bruta foi de R$%2.2f\n", valorVenda);
            printf("Voc� pagou de imposto R$%2.2f\n", imposto);
            printf("Valor da receita l�quida com descontos R$%2.2f\n", valorLiquido);
            printf("Seu lucro � de R$%2.2f\n", lucro);
            printf("Seu estoque era de %2.2fKG\n", estoque);
            printf("Voc� retirou do seu estoque %2.2fKG\n", quilos);
            printf("Seu estoque atual �: %2.2fKG\n", estoqueAtual);
            printf("\n");
            //qual a taxa de imposto a ser paga? perguntar pro usu�rio?
        }

        if (tipoCarne == 2)
        {
            printf("=============================\n");
            printf("||VOC� ESCOLHEU CARNE SU�NA||\n");
            printf("=============================\n");
            printf("\n");
            printf("Quantos quilos o seu estoque de carne Su�na tinha ?\n");
            scanf("%f", &estoque);
            printf("Quantos quilos de carne Su�na voc� vendeu ?\n");
            scanf("%f", &quilos);

                if (quilos > estoque)//se inserir mais quilos que o dispon�vel no estoque o sistema se encerra
                {
                    printf("\n");
                    printf("Valor inv�lido! Reinicie o Sistema!\n");
                    return 0;
                }

            printf("Qual foi o valor de custo do quilo do seu produto ?\n");
            scanf("%f", &custoProduto);
            printf("Qual foi o valor de venda do quilo do seu produto ?\n");
            scanf("%f", &vendaProduto);
            printf("\n");

            printf("=========================\n");
            printf("||RESULTADO DA CONSULTA||\n");
            printf("=========================\n");
            printf("\n");

            valorCusto = (custoProduto * quilos);
            valorVenda = (vendaProduto * quilos);
            imposto = (valorVenda * 0.14) ;
            valorLiquido = (valorVenda - imposto);
            lucro = (valorLiquido - valorCusto);
            estoqueAtual = (estoque - quilos);

            printf("Seu imposto � de 14,00%%\n");
            printf("Seu valor de custo foi R$%2.2f\n", valorCusto);
            printf("O valor da sua venda bruta foi de R$%2.2f\n", valorVenda);
            printf("Voc� pagou de imposto R$%2.2f\n", imposto);
            printf("Valor da receita l�quida com descontos R$%2.2f\n", valorLiquido);
            printf("Seu lucro � de R$%2.2f\n", lucro);
            printf("Seu estoque era de %2.2fKG\n", estoque);
            printf("Voc� retirou do seu estoque %2.2fKG\n", quilos);
            printf("Seu estoque atual �: %2.2fKG\n", estoqueAtual);
            printf("\n");
            //qual a taxa de imposto a ser paga? perguntar pro usu�rio?
        }

        if (tipoCarne == 3)
        {
            printf("==============================\n");
            printf("||VOC� ESCOLHEU CARNE DE AVE||\n");
            printf("==============================\n");
            printf("\n");
            printf("Quantos quilos o seu estoque de carne de Ave tinha ?\n");
            scanf("%f", &estoque);
            printf("Quantos quilos de carne de Ave voc� vendeu ?\n");
            scanf("%f", &quilos);
            
                if (quilos > estoque)//se inserir mais quilos que o dispon�vel no estoque o sistema se encerra
                {
                    printf("\n");
                    printf("Valor inv�lido! Reinicie o Sistema!\n");
                    return 0;
                }

            printf("Qual foi o valor de custo do quilo do seu produto ?\n");
            scanf("%f", &custoProduto);
            printf("Qual foi o valor de venda do quilo do seu produto ?\n");
            scanf("%f", &vendaProduto);
            printf("\n");

            printf("=========================\n");
            printf("||RESULTADO DA CONSULTA||\n");
            printf("=========================\n");
            printf("\n");

            valorCusto = (custoProduto * quilos);
            valorVenda = (vendaProduto * quilos);
            imposto = (valorVenda * 0.09) ;
            valorLiquido = (valorVenda - imposto);
            lucro = (valorLiquido - valorCusto);
            estoqueAtual = (estoque - quilos);

            printf("Seu imposto � de 9,00%%\n");
            printf("Seu valor de custo foi R$%2.2f\n", valorCusto);
            printf("O valor da sua venda bruta foi de R$%2.2f\n", valorVenda);
            printf("Voc� pagou de imposto R$%2.2f\n", imposto);
            printf("Valor da receita l�quida com descontos R$%2.2f\n", valorLiquido);
            printf("Seu lucro � de R$%2.2f\n", lucro);
            printf("Seu estoque era de %2.2fKG\n", estoque);
            printf("Voc� retirou do seu estoque %2.2fKG\n", quilos);
            printf("Seu estoque atual �: %2.2fKG\n", estoqueAtual);
            printf("\n");
            //qual a taxa de imposto a ser paga? perguntar pro usu�rio?
        }

    else if (tipoCarne < 1 || tipoCarne > 3)
    {
        printf("Op��o indispon�vel! Reinicie o sitema!\n");
        printf("\n");
    }

    printf("======================\n");
    printf("||FIM DA CONSULTA!!!||\n");
    printf("======================\n");
}
