#include<stdio.h>

struct  coordenada{
    float x;
    float y;
};

typedef struct coordenada coordenada;

void ImprimeCoordenada( coordenada);
struct coordenada LeCoordenada();
coordenada somaCoordenada(coordenada, coordenada);
coordenada multiCoordenada(coordenada, float);

int main(){
    struct coordenada c1, c2, c_somada, c_multi;

    printf("coodenada 1 \nDigite o valor de x: ");
    c1=LeCoordenada();
    printf("Digite o valor de Y:");
    c2=LeCoordenada();

    printf("Coodernada 1:");
    ImprimeCoordenada(c1);
    printf("Coodernada 2:");
    ImprimeCoordenada(c2);

    c_somada=somaCoordenada(c1,c2);
    printf("coordenada somada:");
    ImprimeCoordenada(c_somada);

    c_multi=multiCoordenada(c1,100);
    printf("Coordenadas multiplicada por escalar:");
    ImprimeCoordenada(c_multi);


    return 0;
}
void ImprimeCoordenada(struct coordenada c){
    printf("(%f, %f)\n", c.x, c.y);
}
struct coordenada LeCoordenada(){
    struct coordenada aux;

    printf("coodenada 1 \nDigite o valor de x: ");
    scanf("%f", &aux.x);
    printf("Digite o valor de Y:");
    scanf("%f", &aux.y);

    return aux;
}
coordenada somaCoordenada(coordenada coord1, coordenada coord2) {
    coordenada aux;

    aux.x=coord1.x+ coord2.x;
    aux.y=coord1.y+ coord2.y;
    
    return aux;
}
coordenada multiCoordenada(coordenada coord, float numero) {
    coordenada aux;

    aux.x= coord.x * numero;
    aux.y= coord.y * numero;

    return aux;
}
