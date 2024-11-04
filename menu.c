#include <stdio.h>

// Adicionando funcoes sem parametro para o calculo das opcoes do menu

void calcularAreaTriangulo()
{
    int base, altura, area;

    // Mensagem metodo relacionado ao  calculo area do triangulo
    printf("(OP - !) Calcular a Area do triangulo\n\n");

    // Informar os valores da base e altura para ser feito o calculo
    printf("\nInforme a base do triangulo: ");
    scanf("%d", &base);

    printf("\nInforme a altura do triangulo: ");
    scanf("%d", &altura);

    area = base * altura / 2;

    printf("A area do triangulo e %d \n", area);
}

// Calculo da area do retangulo

void calcularAreaRetangulo()
{

    int baseret, alturaret, arearet;

    printf("(OP-2) Calcular a Area do Retangulo \n\n");

    printf("\nInforme a base do Retangulo:");
    scanf("%d", &baseret);

    printf("\nInforme a altura do Retangulo: ");
    scanf("%d", &alturaret);

    arearet = baseret * alturaret;

    printf("A area do retangulo e igual a %d", arearet);
}

void main()
{

    int op;

    // Mensagem principal
    printf("=== MENU PRINCIPAL ===\n\n");

    // Adicionando estrutura de repeticao para caso o usuario querer continuar no menu
    while (op != 0)
    {

        // Opcoes do Menu
        printf("1. Calcular Area do Triangulo \n");
        printf("2. Calcular Area do Retangulo \n");
        printf("3. Indentificar o Tipo de Retangulo \n");
        printf("4. Imprimir Numeros de Vetor \n");
        printf("5. Sair \n\n");

        // Mensagem para o usuario informar a opcao desejada
        printf("Informe a opcao desejada:");
        scanf("%d", &op);

        // Estrutura de decisao - Para a escolha do menu

        switch (op)
        {
        case 1:
            calcularAreaTriangulo();
            break;

        case 2:
            calcularAreaRetangulo();
            break;

        case 3:

            break;

        case 4:

            break;

        case 5:
            printf("Programa finalizado. Ate mais");

            break;

        default:
            break;
        }
    }
}