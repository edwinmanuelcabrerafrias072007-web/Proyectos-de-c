#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funiones // 
void llenar_matriz(int n ,int matriz[n][n]);
void imprimir(int n , int matriz[n][n]);
void datos(int n , int matriz[n][n]);

int main () {
    
    srand(time(NULL)); 

    int n ; 

    printf("Digite la longitud de la matriz ==> ");
    scanf("%d",&n);


    int matriz[n][n];
    llenar_matriz(n,matriz);
    imprimir(n,matriz);
    datos(n,matriz);
}   

void llenar_matriz(int n , int matriz[n][n]){


    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j< n ; j++){
            matriz[i][j] = rand () % 2 ;
        }
    }
}

void imprimir(int n , int matriz[n][n]){

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%4d",matriz[i][j]);
        }
        printf("\n"); // espaciado entre linea y linea // 
    }
}
/////variables que necesito para el ejercicio //

int max = 0 ; /// Esta variable guardara la secuencia mas grande "1" en la matriz generada
int linea_encontrada = -1; //// en esta variable se guardara la fila en especifico en donde se encontro la secuencia mas grande ////



void datos(int n , int matriz[n][n]){

    for(int i = 0 ; i < n ; i++){
        int contador = 0 ; 
        for(int j = 0 ; j < n ; j++ ){

            if(matriz[i][j] == 1){
                contador++;

                if(contador > max){
                    max = contador;
                    linea_encontrada = i;
                }

            }else {

                contador = 0 ;
            }
        }          
    }


    if(linea_encontrada != -1){
        printf("\n\nLa fila en donde aparece una mayor frecuencia de 1 es ==> %d",linea_encontrada);
    }else{
        printf("\n\n== No se ubico ninguna fila en la matriz que cumpla esta regla ==");
    }

    printf("\n La cantidad mas grande de 1 encontrados en la matriz fue de ==> %d",max);
}