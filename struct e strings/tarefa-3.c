#include <stdio.h>
#include <string.h>
int main(){
    typedef struct{
        char nome_e_sobrenome[50];
        int idade;
        float media_final;
    } Turma;

    Turma aluno1, aluno2, aluno3;

    strcpy(aluno1.nome_e_sobrenome, "Pedro Sander");
    aluno1.idade = 17;
    aluno1.media_final = 7.59;

    strcpy(aluno2.nome_e_sobrenome, "Sara Walker");
    aluno2.idade = 19;
    aluno2.media_final = 8.28;

    strcpy(aluno3.nome_e_sobrenome, "Noemi Pereira");
    aluno3.idade = 18;
    aluno3.media_final = 8.00;

    printf("%s tem %d anos e tem media final %.1f\n",
        aluno1.nome_e_sobrenome,
        aluno1.idade,
        aluno1.media_final);

    printf("%s tem %d anos e tem media final %.1f\n",
        aluno2.nome_e_sobrenome,
        aluno2.idade,
        aluno2.media_final);

    printf("%s tem %d anos e tem media final %.1f\n",
        aluno3.nome_e_sobrenome,
        aluno3.idade,
        aluno3.media_final);

    return 0;
}
