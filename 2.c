#include <stdio.h>
#include <locale.h>

float soma(n1, n2);
float div(n1, n2);
float mult(n1, n2);
float sub(n1, n2);
primos(n1);
int soman(n1, op2);
multiplos(n1, n2);

int x=0;
int resultado;

int main(void)
{
    setlocale(LC_ALL, "");
    int op, op2;
    int n1, n2;

    do{
        system("cls");
        printf("Digite a op��o desejada\n[1]Soma\n[2]Subtra��o\n[3]Multiplica��o\n[4]Divis�o\n[5]Numero Primo\n[6]Somar apenas pares ou impares\n[7]Multiplos de N\n[0]Sair\n\t");
        scanf(" %d", &op);
        system ("cls");
        switch(op)
        {
        case 1:
            system("cls");
            printf("Digite o primeiro numero:");
            scanf(" %d", &n1);
            printf("Digite o segundo numero:");
            scanf(" %d", &n2);
            printf("%d + %d = %.f\n\n",n1, n2, soma(n1, n2));
            break;
        case 2:
            system("cls");
            printf("Digite o primeiro numero:");
            scanf(" %d", &n1);
            printf("Digite o segundo numero:");
            scanf(" %d", &n2);
            printf("%d - %d = %.f\n\n",n1, n2, sub(n1, n2));
            break;
        case 3:
            system("cls");
            printf("Digite o primeiro numero:");
            scanf(" %d", &n1);
            printf("Digite o segundo numero:");
            scanf(" %d", &n2);
            printf("%d x %d = %.1f\n\n",n1, n2, mult(n1, n2));
            break;
        case 4:
            system("cls");
            printf("Digite o primeiro numero:");
            scanf(" %d", &n1);
            printf("Digite o segundo numero:");
            scanf(" %d", &n2);
            printf("%d / %d = %.2f\n\n",n1, n2, div(n1, n2));
            break;
        case 5:
            system("cls");
            printf("Digite o numero para saber se � primo:");
            scanf(" %d", &n1);
            printf("Voc� digitou o numero %d\n", n1);
            primos(n1);
            break;
        case 6:
            system("cls");
            printf("[1] para somar todos os pares\n[2] para somar todos os impares\n");
            scanf(" %d", &op2);
            switch(op2)
            {
            case 1:
                printf("Digite at� qual numero deseja somar:");
                scanf(" %d", &n1);
                printf("A soma de todos os pares de 0 at� %d � igual a %d\n", n1, soman(n1, op2));
                break;
            case 2:
                printf("Digite at� qual numero deseja somar:");
                scanf(" %d", &n1);
                printf("A soma de todos os impares de 0 at� %d � igual a %d\n", n1, soman(n1, op2));
                break;
            }
            break;
        case 7:
            system ("cls");
            printf("Deseja ver multiplo de qual numero:");
            scanf(" %d", &n1);
            printf("At� qual numero:");
            scanf(" %d", &n2);
            printf("Esse s�o multiplos de %d, do 0 at� %d\n", n1, n2);
            printf("%d\n", multiplos(n1, n2));
            break;
        default :
            printf("Opera��o invalida");
            getchar();
            main();
        }
        printf("-----------------------------------\nOutra opera��o digite [1]\nPara sair digite [0]");
        scanf(" %c", &op);
    }while(op!=0);
    return 0;
}

float soma(n1, n2)
{
    return n1+n2;
}
float div(n1, n2)
{
    return n1/n2;
}
float mult(n1, n2)
{
    return n1*n2;
}
float sub(n1, n2)
{
    return n1-n2;
}
primos(n1)
{
    int p=0;
    for(x=1; x<=n1; x++)
    {
    if(x%2==0)
        p++;
    }
    if(p = 2)
    printf("Ele � primo\n");
    else
    printf("Ele n�o � primo\n");
}

int soman(n1, op2)
{
    resultado=0;
    if(op2=1)
    {
        while(x<=n1)
        {
        if(x%2==0)
        {
            resultado=resultado+x;
        }
        x++;
        }
    return resultado;
    }
    else
    {
        while(x<=n1)
        {
        if(x%2!=0)
        {
            resultado=resultado+x;
        }
        x++;
        }
    return resultado;
    }
}

multiplos(n1, n2)
{
    for(x=0; x<n2; x++)
    {
        if(x%n1==0)
        printf("%d\t", x);
        else
        continue;
    }

}
