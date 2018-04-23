#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h> //Para Windows
#include <curses.h>  //Para Linux
#include "funciones_gerflix.h"

int main()
{
	int opcionMenu1;

	estUsuario listadoUsuarios[CANT_USERS];
	estSerie listadoSeries[CANT_SERIES];
    inicializar(listadoSeries, listadoUsuarios, CANT_SERIES, CANT_USERS);
	printf("\t=GERFLIX=");
	do
		{
			menuOpciones(
                "\n==============================\n"
                "\n\tMENU PRINCIPAL\n"
			    "\n==============================\n"
			    "¿Con qué menu desea trabajar?\n"
			    "1. USUARIOS\n"
			    "2. SERIES\n"
			    "9. SALIR\n"
			    "Elija una opcion: ");
			scanf("%d",&opcionMenu1);
			printf("==============================\n");

			funcionSwitchMenu(opcionMenu1, listadoSeries, listadoUsuarios, CANT_SERIES, CANT_USERS);

		}
	while(opcionMenu1 != 9);
	return 0;
}
