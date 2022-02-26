/// Librerías
#include "OtroDev2.h"


/// Definición de variables
DoblesStruct Dobles;
OpBitsStr OpBits;


int main(void){


    Dobles.Var1 = 84.2;
    Dobles.Var2 = 107.4;
    printf("\nVariables tipo double y struct");
    printf("\nValor de variable float: %0.2f", Dobles.Var1);
    printf("\nValor de variable double: %0.2f", Dobles.Var2);

    Dobles.Var1=0;
    printf("\nIncrementos: ");
    for(Dobles.i=0;Dobles.i<5;Dobles.i++){
        Dobles.Var1 += 1.1;
        printf("\nValor: %0.1f", Dobles.Var1);}

    printf("\nOperacion de bits");
    printf("\nEscribe un solo caracter: ");
    scanf("%c", &OpBits.InChr1);
    fflush(stdin);
    printf("\nEscribe otro caracter: ");
    scanf("%c", &OpBits.InChr2);
    fflush(stdin);
    printf("\nEscribe otro caracter: ");
    scanf("%c", &OpBits.InChr3);
    fflush(stdin);
    printf("\nEscribe otro caracter: ");
    scanf("%c", &OpBits.InChr4);
    fflush(stdin);

    printf("\nCaracter 1: %c", OpBits.InChr1);
    printf("\nCaracter 2: %c", OpBits.InChr2);
    printf("\nCaracter 2: %c", OpBits.InChr3);
    printf("\nCaracter 2: %c", OpBits.InChr4);

    /// Operación
    OpBits.EnteroAux = 0;
    OpBits.Entero = OpBits.InChr1;
    OpBits.EnteroAux = OpBits.InChr2 << 8;
    OpBits.Entero |= OpBits.EnteroAux;
    OpBits.EnteroAux = OpBits.InChr3 << 16;
    OpBits.Entero |= OpBits.EnteroAux;
    OpBits.EnteroAux = OpBits.InChr4 << 24;
    OpBits.Entero |= OpBits.EnteroAux;
    printf("\nValor entero: %d", OpBits.Entero);
    ///Desconposición
    printf("\nDesconposicion: ");
    printf("\nCaracter 1: %c", OpBits.OutChr1);
    printf("\nCaracter 2: %c", OpBits.OutChr2);
    printf("\nCaracter 3: %c", OpBits.OutChr3);
    printf("\nCaracter 4: %c", OpBits.OutChr4);

}   /// Main
