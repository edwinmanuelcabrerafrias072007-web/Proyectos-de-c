/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void contar(char *c);
void palabra_mas_grande(char *c);

int main() {

    char *c = calloc(MAX,sizeof(char));

    printf("Frase ==> ");
    fgets(c,MAX,stdin);

    printf("%s",c);

    contar(c);
    palabra_mas_grande(c);




    return 0;
}


void contar(char *c){ //longitud de la palabra //

    int cantidad;

    cantidad = strlen(c);

    printf("\n\nTamano de la cadena ==> %d",cantidad);
}



void palabra_mas_grande(char *c){

    int max = 0;
    int actual = 0;

    char palabra[MAX];
    char mayor[MAX];

    int j = 0 ;

    for(int i = 0 ; c[i] != '\0' ; i++ ){

        if(c[i] != ' ' && c[i] != '\n'){
            palabra[j] = c[i];
            j++;
            actual ++ ;
        }else {
            palabra[j] = '\0 ';

            if(actual > max){
                max = actual;
                strcpy(mayor , palabra);
            }

            actual = 0 ;
            j = 0 ;
        }
    }

    palabra[j] = '\0';
    if(actual > max ){
    strcpy(mayor,palabra);

    }
    printf("\n\nLa palabra mas grande es %s",mayor);
}
*/






/*

//ejercicios //

// 1- crear una funcion que retorne un valor y diga si es par   LISTO//
// 2- crear una funcion que reciba un numero y retorne el cubo  LISTO//


#include <stdio.h>
#include <stdlib.h>


//Funciones //

int par(int a);
int cubo(int a);

int main () {

    int a;


    printf("Digite la cantidad  == > ");
    scanf("%d",&a);

    int numero = par(a);

    if (numero == 0 ){

        printf("EL NUMERO ES IMPAR");
    }else{
        printf("EL NUMERO ES PAR");
    }

    int resultado2 = cubo(a);

    printf("\nEl cubo de ese numero es [%d]",resultado2);



    return 0 ;
}


int par(int a){
    if(a % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int cubo(int a){

    int resultado;

    resultado = a * a * a ;

    return resultado;
}
*/


/*
// Ejercicio 2 Listo //


#include <stdio.h>
#include <stdlib.h>


//Funciones //

int mayor (int a , int b );

int main () {

    int a,b ;

    printf("Digite numero 1 ==> ");
    scanf("%d",&a);

    printf("Digite numero 2 ==> ");
    scanf("%d",&b);

    int resultado = mayor(a,b);

    printf("mayor fue ==> %d",resultado);

    return 0 ;
}

int mayor (int a , int b ){

    int mayor;

    if(a > b ){

        return a ;
    }else {
        return b;
    }

}

*/


/*
//Ejemplo de signo tenario para los if  ///



#include <stdio.h>
#include <stdlib.h>


int main(){


    int edad ;

    printf("Digite su eda ==> ");
    scanf("%d",&edad);


    char *mensaje = (edad >= 18) ? "El pana es mayor " : "El pana es menor" ;

    printf("%s",mensaje);


    return 0;
 }


 */


/*

 #include <stdio.h>
 #include <stdlib.h>

 //funciones //

 int comp(int a);

 int main() {

    int a ;

    printf("Digite el numero => ");
    scanf("%d",&a);

    int resultado = comp(a);

    char *frase = (resultado == 1) ? "Es positivo" : (resultado == 0 ? "Es cero" : "Es negativo");

    printf("%s",frase);


    return 0;
 }


  int comp(int a){

    return (a > 0 ) ? 1 : (a == 0 ? 0 : -1);

  }


  */




#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//Funciones//

void space(){printf("\n\n");}
void llenar_matriz(int x, int y , int matriz [x][y]);
void imprimir_matriz(int x , int y , int matriz[x][y]);


int main () {

    int x,y;
    srand(time(NULL));

    printf("Dimenciones de la matriz [X]==> ");
    scanf("%d",&x);

    printf("Dimenciones de la matriz [Y] ==> ");
    scanf("%d",&y);


    printf("==== DIMENCIONES ESTABLECIDAS [%d] X [%d] PARA LA MATRIZ ====",x,y);

    space();

    int matriz[x][y];

    llenar_matriz(x,y,matriz);

    system("cls");

    imprimir_matriz(x,y,matriz);

    return 0;
}

void llenar_matriz(int x , int y , int matriz[x][y] ){

    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            matriz[i][j] = rand() % 9 ;
        }
    }
}


void imprimir_matriz(int x , int y , int matriz[x][y]){

    printf(" ==== Tablero inicial de cine ==== \n\n");


    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < y ; j++){
            printf("\t%d",matriz[i][j]);

        }
        printf("\n");
    }

}
