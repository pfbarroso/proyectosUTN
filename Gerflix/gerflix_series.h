#define NAME_STRING 40
#define CANT_SERIES 5

typedef struct
{
	int idSerie;    //Primary key
	char nombre[NAME_STRING];
	int cantidadTemps;
	int debutYear;
	int estado;
} estSerie;

void serieABM(int, estSerie[], int);
void altaSerie(estSerie[]);
void bajaSerie(estSerie[]);
void modSerie(estSerie[]);
void listarSeries(estSerie[], int);
