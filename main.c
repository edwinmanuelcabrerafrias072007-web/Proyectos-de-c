#include <stdio.h>
#include <stdlib.h>


     struct trabajador {

        int id;
        char nombre[50];
        char nacionalidad[30];
        char num_telefono[40];
        char sector_vivienda[50];
     };

//Funciones//

void llenar_regi(struct trabajador *p);
void ver_registro(struct trabajador *p);

int main(){

    struct trabajador e1[4];
    struct trabajador *p = &e1[0];
    llenar_regi(e1);
    ver_registro(e1);

    return 0;
}

void llenar_regi(struct trabajador *p){

    char conditional;
    char conditional2;
    int i =0 ;

    printf("==== Formulario de registro de trabajador ==== \n\n");

    do{

        printf("[Registro (%d)] \n",i+1);

        printf("ID ==> ");
        scanf("%d",&(p+i)->id);

        while(getchar() != '\n');

        printf("Nombre ==> ");
        gets((p+i)->nombre);

        printf("Nacionalidad ==> ");
        gets((p+i)->nacionalidad);

        printf("Numero de Telefono ==> ");
        gets((p+i)->num_telefono);

        printf("Area Desempeño ==> ");
        gets((p+i)->sector_vivienda);

        printf("Desea continuar ingresando S/N ==> ");
        scanf(" %c",&conditional);

        i++;

        system("cls");

        if(i == 4 ){

            printf("\n\tLIMITE DE REGISTROS ADMINITDOS\n");

            printf("DESEA VER LOS REGISTROS HECHOS S/N ==> ");
            scanf(" %c",&conditional2);

            if(conditional2 == 's'){
                ver_registro(e1);
            }
        }



    }while(conditional == 's' && i < 4);




}


void ver_registro(struct trabajador *p){

    system("cls");

    printf("==== FORMULARIO DE REGISTROS RECIENTES ====");

    for(int i = 0 ; i < 4 ; i++){

        printf("[Registro (%d)]",i+1);
        printf("ID => %d ",(p+i)->id);
        printf("Nombre => %s",(p+i)->nombre);
        printf("Nacionalidad => %s",(p+i)->nacionalidad);
        printf("Numero de Telefono => %s",(p+i)->num_telefono);
        printf("Sector de Vivienda => %s",(p+i)->sector_vivienda);

    }

}
