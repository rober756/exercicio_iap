#include<stdio.h>
    void main(){
        float distanciaKm, distanciaCm;
        printf("qual foi a distancia em km");
        scanf("%f", &distanciaKm);
        distanciaCm = distanciaKm * 100000.0;
        printf("resultando %.2fCm", distanciaCm); 
        }