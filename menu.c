#include <stdio.h>
#define PI 3.14

// Adicionando funcoes sem parametro para o calculo das opcoes do menu

void calcularAreaTriangulo()
{
    int base, altura, area;

    // Mensagem metodo relacionado ao  calculo area do triangulo
    printf("\n(OP - !) Calcular a Area do triangulo\n\n");

    // Informar os valores da base e altura para ser feito o calculo
    printf("\nInforme a base do triangulo: ");
    scanf("%d", &base);

    printf("Informe a altura do triangulo: ");
    scanf("%d", &altura);

    area = base * altura / 2;

    printf("A area do triangulo e %d \n\n", area);
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

    printf("A area do retangulo e igual a %d\n", arearet);
}

// Funcao para identificar o retangulo/quadrado

void identificarRetangulo()
{

    int base, altura;

    printf("\n(OP-3) Identificar a Area o Tipo de Retangulo\n\n");

    printf("\n Informe a base: ");
    scanf("%d", &base);

    printf("Informe a altura: ");
    scanf("%d", &altura);

    if (base == altura)
    {
        printf("\nEle e um quadrado");
    }
    else
    {
        printf("\nEle e um retangulo");
    }

    printf("\n\n");
}

void calcularAreaCirculo()
{

    int raio, area;

    printf("(OP-4) Calcular a Area do Ciruclo \n\n");

    printf("\nInforme o valor do raio do circulo: ");
    scanf("%d", &raio);

    area = raio * raio * PI;

    printf("\nA area do circulo e %d", area);
}

void main()
{

    int op;

    // Adicionando estrutura de repeticao para caso o usuario querer continuar no menu
    while (op != 5)
    {
        // Mensagem principal
        printf("\n=== MENU PRINCIPAL ===\n\n");
        // Opcoes do Menu
        printf("1. Calcular Area do Triangulo \n");
        printf("2. Calcular Area do Retangulo \n");
        printf("3. Indentificar se e Retangulo ou quadrado \n");
        printf("4. Calcular a area do circulo  \n");
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
            identificarRetangulo();
            break;

        case 4:
            calcularAreaCirculo();
            break;

        case 5:
            printf("Programa finalizado. Ate mais");

            break;

        default:
            break;
        }
    }
}