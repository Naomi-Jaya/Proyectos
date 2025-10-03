#include <stdio.h>
int main(){
    //ingrese cuántos estudiantes hay, ingrese las notas y saque el promedio//
    int numEstudiantes, nota;
    float suma = 0;
    float promedio;

    printf("Ingrese el número de estudiantes: ");
    scanf("%d" ,&numEstudiantes);

    while (numEstudiantes <=0 || numEstudiantes != 1){
        printf("Error.");
        printf("Ingrese el número de estudiantes en positivo: ");
        scanf("%d" ,&numEstudiantes);
    }
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
    //printf("Tenemos %d estudiantes\n",numEstudiantes);//
}