#include<stdio.h>
#include <math.h>
    void main(){
        float volume_esfera, raio;
        printf("v de raio");
        scanf("%f",&raio);
        volume_esfera = (4.0/3.0)*3.14159*(pow(raio,3.0));
        printf("o volume da esfera: %.2f", volume_esfera);
        }