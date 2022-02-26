/// Librerías
#include "OtroDev2.h"


/// Definición de variables
DoblesStruct Dobles;
OpBitsStr OpBits;

PuntosStr Puntos[2];


int main(void){


goto SaltoDev2;
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

    OpBits.OutChr1 = OpBits.Entero & 255;
    OpBits.OutChr2 = (OpBits.Entero & 65280) >> 8;
    OpBits.OutChr3 = (OpBits.Entero & 16711680) >> 16;
    OpBits.OutChr4 = (OpBits.Entero & 4278190080) >> 24;

    printf("\nCaracter 1: %c", OpBits.OutChr1);
    printf("\nCaracter 2: %c", OpBits.OutChr2);
    printf("\nCaracter 3: %c", OpBits.OutChr3);
    printf("\nCaracter 4: %c", OpBits.OutChr4);

SaltoDev2:

    printf("\nConstantes: ");

    const Unint ConstX = 840;
    const Unint ConstY = 930;
    const Unint *const ConstPtr = &ConstX;

    ///ConstPtr = &ConstX;
    ///ConstPtr = &ConstY;

    printf("\nValor de la variable constante: %d", *ConstPtr);

    printf("\nEstructuras: \n");

    Puntos[0].Coordena.x = 97.8;
    Puntos[0].Coordena.y = 49.4;
    Puntos[0].Nombre[0]='C';
    Puntos[0].Nombre[1]='e';
    Puntos[0].Nombre[2]='s';
    Puntos[0].Nombre[3]='a';
    Puntos[0].Nombre[4]='r';

    Puntos[1].Coordena.x = 87.2;
    Puntos[1].Coordena.y = 32.7;
    Puntos[1].Nombre[0]='O';
    Puntos[1].Nombre[1]='m';
    Puntos[1].Nombre[2]='a';
    Puntos[1].Nombre[3]='r';

    for(OpBits.Entero=0;OpBits.Entero<2;OpBits.Entero++){--------

        printf("\nNombre: %s", Puntos[OpBits.Entero].Nombre);
        printf("\nPunto x: %d", Puntos[OpBits.Entero].x);
        printf("\nPunto y: %d", Puntos[OpBits.Entero].Coordena.y);

    }






}   /// Main
