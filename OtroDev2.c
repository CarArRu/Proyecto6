/// Librerías
#include "OtroDev2.h"
#include <stdio.h>




/// Funciones

void CambiarTexto(UnChr const *Cadena){

    Unint Tam=0, i=0;
    UnChr Texto[50];

    for(i=0;i<40;i++)
        Texto[i] = '\0';

    while(Cadena[Tam]!=NULL){
        Texto[Tam]=Cadena[Tam];

        Texto[Tam] = (Cadena[Tam] >= 'A' && Cadena[Tam] <= 'Z') ? Cadena[Tam] + 32 : Cadena[Tam];

        Tam++;
    }

    Texto[0] = (Cadena[0] >= 'a' && Cadena[0] <= 'z') ? Cadena[0]-32 : Cadena[0];
    i=0;
    do{

        if(Cadena[i]==' '){
            Texto[i+1] = (Cadena[i+1] >= 'a' && Cadena[i+1] <= 'z') ? Cadena[i+1]-32 : Cadena[i+1];
        }
        i++;
    }while(i<Tam);



    printf("\nTexto: %s", Texto);

}
