#include <stdio.h>
#include "gerflix_series.h"

void serieABM(int opcionABM, estSerie series[], int cantidad)
    {
    switch(opcionABM)
        {
        case 1://ALTA
            altaSerie(series);
            break;
        case 2://LISTAR
            listarSeries(series, cantidad);
            break;
        case 3://MODIFICAR
            modSerie(series);
            break;
        case 4://BAJA
            bajaSerie(series);
            break;
        case 5://ORDENAR
            break;
        case 6://HARDCODE
            break;
        case 7://CLEAR SCREEN
            system("clear");
            break;
        case 9:
            break;
        default:
            printf("OPCION NO RECONOCIDA. REINGRESE\n");
            break;
        }
    }
void altaSerie(estSerie shows[])
    {

    }
void listarSeries(estSerie shows[], int qty)
    {

    }
void modSerie(estSerie shows[])
    {

    }

void bajaSerie(estSerie shows[])
    {

    }
