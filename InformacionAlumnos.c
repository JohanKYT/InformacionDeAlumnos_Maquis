#include <stdio.h>
#include <string.h>
// Kevin Maquis

#define MaximoAlumnos 50
#define MaximoNombre 50
#define MaximoDireccion 50
#define MaximoCarrera 50

struct InformacionAlumnos // Creamos una extructura para acceder de manera mas puntual a los datos y poder trabjar de mejor manera
{
    int matricula;
    char nombre[MaximoNombre];
    char direccion[MaximoDireccion];
    char carrera[MaximoCarrera];
    float promedio;
};

void ingresarInformacion(struct InformacionAlumnos alumnos[], int *CantAlumnos);
void mostrarInformacion(struct InformacionAlumnos alumnos[], int CantAlumnos);

int main() {
    struct InformacionAlumnos alumnos[MaximoAlumnos];
    int CantAlumnos = 0;
    int opcion;
    do {
        // Creacion del menu de opciones.
        printf("\nMenu De Seleccion:\n");
        printf("1. Ingresar nuevos\n");
        printf("2. Mostrar guardados\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        fflush(stdin);  
        // Limpiar el bufer después de cada lectura Para evitar que de errores de memoria 
        switch (opcion) {
            case 1:
                ingresarInformacion(alumnos, &CantAlumnos);
                break;
            case 2:
                mostrarInformacion(alumnos, CantAlumnos);
                break;
            case 3:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 3);
    return 0;
}
//Agregamos la funcion para que el programa imprima los datos guardados que ingreso el ususario
void mostrarInformacion(struct InformacionAlumnos alumnos[], int CantAlumnos)
{
    if (CantAlumnos > 0)
    {
        printf("\nInformacion de los alumnos:\n");
        for (int i = 0; i < CantAlumnos; i++)
        {
            printf("\nAlumno %d:\n", i + 1);
            printf("Nombre : ");
            puts(alumnos[i].nombre);//Se agrego la funcion puts para inprimier cadenas
            printf("Direccion: ");
            puts(alumnos[i].direccion);
            printf("numero de Matricula: %d\n", alumnos[i].matricula);
            printf("Nombre Carrera: ");
            puts(alumnos[i].carrera);
            printf("Nota del Promedio: %.2f\n", alumnos[i].promedio);
        }
    }
    else
    {
        printf("No hay datos para mostrar.\n");
    }
}
// Comenzamos creando las funciones que usaremos para determinar que vamos a ingresar dependiendo de la opcion que se realice cuando realicemos el menu"
// En este caso es el ingreso de datos para llenar
void ingresarInformacion(struct InformacionAlumnos alumnos[], int *CantAlumnos)
{
    if (*CantAlumnos < MaximoAlumnos)
    {
        printf("Ingrese el nombre de este alumno: ");
        fflush(stdin);//Aqui agregamos la funcion fflush para limpiar el buffer y no nos marque error con las funciones gets y puts
        gets(alumnos[*CantAlumnos].nombre);

        printf("\nIngrese la matricula correspondiente: ");
        scanf("%d", &alumnos[*CantAlumnos].matricula);

        printf("Ingrese la direccion: ");
        fflush(stdin);
        gets(alumnos[*CantAlumnos].direccion);

        printf("Ingrese el nombre carrera : ");
        fflush(stdin);
        gets(alumnos[*CantAlumnos].carrera);

        printf("Ingrese el promedio de la carrera: ");
        scanf("%f", &alumnos[*CantAlumnos].promedio);

        (*CantAlumnos)++;
        printf("\tDatos guardados.\n");
    }
    else
    {
        printf("Se alcanzo el limite.\n");
    }
}


