/// Librerías
#include "OtroDev1.h"


/// Definiciones de Variables
SwitchCaseStr SwhCase;




int main(void){


    printf("\nUso de 'static'\n");

    ContadorStatic();
    ContadorStatic();
    ContadorStatic();
    ContadorStatic();
    ContadorStatic();

    printf("\nValor de variable externa: %d", VarExterna);

    printf("\n\nSwitch cases\n");
    SwhCase.ValorCase=1;

    switch(SwhCase.ValorCase){

    case 0 : case 1 :
        printf("\nCaso 0");
        printf("\nCaso 1");
        break;

    /**case 1 :
        printf("\nCaso 1\n");
        break;*/

    case 2 :
        printf("\nCaso 2\n");
        break;


    }   /// switch case




}   /// Main
