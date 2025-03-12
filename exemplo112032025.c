#include <stdio.h>
 void main()
{float A,B,D;
printf("Digite um numero qualquer\n");
scanf("%f",&A);
do
{
    printf("Digite um numero diferente de zero\n");
    scanf("%f",&B);
    if(B==0)
    {
        printf("Numero errado\n");

    }
}while(B==0);
D=A/B;
printf("O resultado da divisao=%.1f\n",D);

}
