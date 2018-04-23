#include "funciones_gerflix.h"

void menuOpciones(char cadena[])
{
    printf(cadena);
}

void funcionSwitchMenu(int option, estSerie series[], estUsuario users[], int nroSeries, int nroUsers)
{
    int opcionMenu2;
    switch(option)
    {
    case 1:
        do
        {
            menuOpciones(
                "\n\tMenu: USUARIOS\n"
                "\n==============================\n"
                "1. ALTA\n"
                "2. LISTAR\n"
                "3. MODIFICAR\n"
                "4. DAR DE BAJA\n"
                "5. RESTAURAR\n"
                "6. HARDCODEAR\n"
                "7. LIMPIAR PANTALLA\n"
                "8. CONSULTAS\n"
                "9. SALIR\n"
                "Elija una opcion: ");

            scanf("%d",&opcionMenu2);
            printf("==============================\n");
            userABM(opcionMenu2, users, nroUsers);
        }
        while(opcionMenu2 != 9);
        break;
    case 2:
        do
        {
            menuOpciones(
                "\n\tMenu: SERIES\n"
                "\n==============================\n"
                "1. ALTA\n"
                "2. LISTAR\n"
                "3. MODIFICAR\n"
                "4. DAR DE BAJA\n"
                "5. RESTAURAR\n"
                "6. HARDCODEAR\n"
                "7. LIMPIAR PANTALLA\n"
                "8. CONSULTAS\n"
                "9. SALIR\n"
                "Elija una opcion: ");

            scanf("%d",&opcionMenu2);
            printf("==============================\n");
            serieABM(opcionMenu2, series, nroSeries);
        }
        while(opcionMenu2 != 9);
        break;

    case 9:

        break;

    default:
        printf("OPCION NO RECONOCIDA. REINGRESE\n");

        break;
    }
}


void eliminarNuevaLinea(char cadena[])
{
    int i;
    for(i=0; i<=strlen(cadena); i++)
    {

        if(cadena[i] == '\n')
        {
            cadena[i] = '\0';
        }

    }
}


void inicializar(estSerie shows[], estUsuario viewers[], int qtyS, int qtyU)
{
    int i;
    for(i=0; i<qtyS; i++)
    {
        shows[i].idSerie = 0;
        shows[i].estado = 0;
    }
    for(i=0; i<qtyU; i++)
    {
        viewers[i].idUser = 0;
        viewers[i].estado = 0;
    }

}
int primerIndiceLibre(estSerie shows[], estUsuario viewers[], int qtyS, int qtyU)
{

}
int primerIdLibre(estSerie shows[], estUsuario viewers[], int qtyS, int qtyU)
{

}
