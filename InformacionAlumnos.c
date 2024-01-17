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

// Comenzamos creando las funciones que usaremos para determinar que vamos a ingresar dependiendo de la opcion que se realice cuando realicemos el menu"
// En este caso es el ingreso de datos para llenar
void ingresarInformacion(struct InformacionAlumnos alumnos[], int *CantAlumnos)
{
    if (*CantAlumnos < MaximoAlumnos)
    {
        printf("\nIngrese la matricula correspondiente: ");
        scanf("%d", &alumnos[*CantAlumnos].matricula);
        printf("Ingrese el nombre de este alumno: ");       
        gets(alumnos[*CantAlumnos].nombre);
        printf("Ingrese la direccion: ");        
        gets(alumnos[*CantAlumnos].direccion);
        printf("Ingrese el nombre carrera : ");
        gets(alumnos[*CantAlumnos].carrera);
        printf("Ingrese el promedio de la carrera: ");
        scanf("%f", &alumnos[*CantAlumnos].promedio);

        (*CantAlumnos)++;
        printf("\tDatos guardados correctamente.\n");
    }
    else
    {
        printf("Se alcanzo el limite.\n");
    }
}

void mostrarInformacion(struct InformacionAlumnos alumnos[], int CantAlumnos)
{
    if (CantAlumnos > 0)
    {
        printf("\nInformacion de los alumnos:\n");

        for (int i = 0; i < CantAlumnos; i++)
        {
            printf("\nAlumno %d:\n", i + 1);
            printf("Matricula: %d\n", alumnos[i].matricula);
            printf("Nombre: %s\n", alumnos[i].nombre);
            printf("Direccion: %s\n", alumnos[i].direccion);
            printf("Carrera: %s\n", alumnos[i].carrera);
            printf("Promedio: %.2f\n", alumnos[i].promedio);
        }
    }
    else
    {
        printf("No hay datos para mostrar.\n");
    }
}
