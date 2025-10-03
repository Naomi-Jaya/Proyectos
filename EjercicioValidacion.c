#include <stdio.h>
int main(){
    //ingrese cuántos estudiantes hay, ingrese las notas y saque el promedio//
    int numEstudiantes, nota;
    int resultado;
    float suma = 0;
    float promedio;

    do {
        printf("Ingrese el número de estudiantes: ");
        resultado = scanf("%d" ,&numEstudiantes);
        if (resultado != 1){
            printf("Error,debe ingresar un número positivo\n");
            scanf("%*s");
        }
        else if (numEstudiantes <= 0){
            printf("Error,el número debe ser positivo.\n");
        }
    } while(resultado != 1 || numEstudiantes <= 0);
    
    for (int i = 0; i < numEstudiantes; i++){
        printf("Estudiante %d\n" ,(i + 1));
        do{
            printf("Ingrese la nota, debe estar entre 1 y 10: ");
            scanf("%d",&nota);
        } while (nota > 10 || nota < 1);
        suma += nota;
    }
    promedio = suma/ numEstudiantes;
    printf("El promedio de las notas es: %.2f" ,promedio);

    return 0;
}