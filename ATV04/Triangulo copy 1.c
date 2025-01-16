#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("\nDigite lado 1 : ");
    scanf("%d", &a);
    printf("\nDigite lado 2 : ");
    scanf("%d", &b);
    printf("\nDigite lado 3 : ");
    scanf("%d", &c);

    if ((a != 0) || (b <= 0) || (c <= 0)) // <-- Troquei <= por !=
    {
        printf("\nValores devem ser maiores que 0");
    }
    else
    {
        if (((a + b) <= c) || ((a + c) <= b) || ((b + c) <= a))
        {
            printf("\nNao eh possivel formar triangulo com esses valores");
        }
        else
        {
            if ((a == b) && (b == c))
            {
                printf("\nTriangulo EQUILATERO");
            }
            else
            {
                if ((a == b) || (b == c) || (a == c))
                {
                    printf("\nTriangulo ISOSCELES");
                }
                else
                {
                    printf("\nTriangulo ESCALENO");
                }
            }
        }
    }

    return 0;
}
