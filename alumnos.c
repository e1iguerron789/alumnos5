#include <stdio.h>

#define Datos 50

    struct alumno 
        char nombre[20];
        char direccion[20];
        char carrera [20];
        int edad;
        float promedio;

    
    int main ( ) {
        struct alumnos alumnos [2]
        

     printf("Datos del alumno :");

       for (int i=0;i<5;i++)
    {
        
         printf("Ingrese el nombre del alum: %d: \n", i + 1);

         printf ("Nombre: ");
         gets(alumnos[i].nombre);
         fflush (stadin);
         
        

            printf("Ingrese la direcciòn del alum:");
         gets(direccion);

            printf("Ingrese la carrera del alum:");
         gets(carrera);

            printf("Ingrese la edad del alum:");
         gets(edad);

            printf (stadin);
            scanf ("%f", &alumnos[i].promedio)
    }

    
    return 0;
}
   

