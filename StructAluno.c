#include<stdio.h>
#include<string.h>

struct Aluno
{
    char nome[45];
    float nota;
};
int main(){
    struct Aluno a, b;
    {
        strcpy(a.nome, "Helen");
        a.nota= 4.7;
        strcpy(b.nome, "Dilbert");
        b.nota= 2*a.nota;
    };
    printf("a.nome= %s , a.nota= %f\n", a.nome, a.nota);
    printf("a.nome= %s , a.nota= %f\n", b.nome, b.nota);
}