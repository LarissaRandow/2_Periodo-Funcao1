#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Prototipo
void FuncaoIMC(float Altura, float Massa, char Sexo, float *IMC);

int main()
{
    int i;
    float Altura, Massa, IMC;
    char Sexo;
    for(i = 0; i < 100; i++)
    {
        printf("Digite o Sexo: ");
        scanf("%char",&Sexo);
        printf("Digite a Altura: ");
        scanf("%f",&Altura);
        printf("Digite a Massa: ");
        scanf("%f",&Massa);
        FuncaoIMC(Altura, Massa, Sexo, &IMC);
        printf("O IMC e: %f\n",IMC);
    }
    return 0;
}
void FuncaoIMC(float Altura, float Massa, char Sexo, float *IMC)
{
    if(Sexo == 'f')
        *IMC = 0.95 * Massa / pow(Altura, 2);
    else
        *IMC = (1.05 * Massa) / pow(Altura, 2);

}
