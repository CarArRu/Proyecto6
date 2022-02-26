#ifndef OTRODEV2_H_INCLUDED
#define OTRODEV2_H_INCLUDED

/// Librerías
#include<stdio.h>





/// Definiciones de tipo
typedef double Doble;
typedef float Flotante;
typedef unsigned int Unint;
typedef unsigned char UnChr;


typedef struct{
    Flotante Var1;
    Doble Var2;
    Unint i;
}DoblesStruct;


typedef struct{

    UnChr InChr1;
    UnChr InChr2;
    UnChr InChr3;
    UnChr InChr4;

    UnChr OutChr1;
    UnChr OutChr2;
    UnChr OutChr3;
    UnChr OutChr4;

    Unint Entero;
    Unint EnteroAux;

}OpBitsStr;


typedef struct{
    Flotante x;
    Flotante y;
}CoordenadasStr;

typedef struct{
    UnChr Nombre[20];
    CoordenadasStr Coordena;
}PuntosStr;





#endif // OTRODEV2_H_INCLUDED
