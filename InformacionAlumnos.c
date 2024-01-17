#include <stdio.h>
#include <string.h>
//Kevin Maquis

#define MaximoAlumnos 50
#define MaximoNombre 50
#define MaximoDireccion 50
#define MaximoCarrera 50


struct InformacionAlumnos//Creamos una extructura para acceder de manera mas puntual a los datos y poder trabjar de mejor manera
{
    int matricula;
    char nombre[MaximoNombre];
    char direccion[MaximoDireccion];
    char carrera[MaximoCarrera];
    float promedio;
};

//Comenzamos creando las funciones que usaremos para determinar que vamos a ingresar dependiendo de la opcion que se realice cuando realicemos el menu"
//En este caso es el ingreso de datos para llenar
void ingresarInformacion(struct InformacionAlumnos alumnos[], int *CantAlumnos) {
    if (*CantAlumnos < MaximoAlumnos) {
        printf("\nIngrese la matricula del nuevo alumno: ");
        scanf("%d", &alumnos[*CantAlumnos].matricula);
    }
}  