    #include<stdio.h>
    void main(){
        float resultado, n1, n2, n3, n4, n5;
        printf("digite numero!\n");
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);
        scanf("%f", &n4);
        scanf("%f", &n5);
        resultado= (n1+n2+n3+n4+n5)/ 5.0;
        printf("Resultado:%f\n", resultado);
    }