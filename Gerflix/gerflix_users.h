#define EMAIL 50
#define PSWD 50
#define NAME_STRING 40
#define CANT_USERS 10

typedef struct
{
	int idUser;     //Primary key
	char email[EMAIL];
	char password[PSWD];
	int idSerie;    //Foreign Key
	int estado;
} estUsuario;

void userABM(int, estUsuario[], int);
void altaUsuario(estUsuario[]);
void bajaUsuario(estUsuario[]);
void modUsuario(estUsuario[]);
void listarUsers(estUsuario[], int);
