#include "gerflix_series.h"
#include "gerflix_users.h"
#include <stdlib.h>
#include <string.h>
//#include <conio.h> //Para Windows
#include <curses.h>  //Para Linux
#include <unistd.h>

void menuOpciones(char[]);
void funcionSwitchMenu(int, estSerie[], estUsuario[] ,int, int);
void eliminarNuevaLinea(char[]);
void inicializar(estSerie[], estUsuario[], int, int);
int primerIndiceLibre(estSerie[], estUsuario[], int, int);
int primerIdLibre(estSerie[], estUsuario[], int, int);
