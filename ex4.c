#include<stdio.h>
    void main(){
        float vprest, acrescimo_final;
        printf("prestacao:");
        scanf("%f", &vprest);
        acrescimo_final= (vprest +( vprest*0.1)-((vprest*0.1)*0.1));
        printf("pagara: %.2f", acrescimo_final);
        }