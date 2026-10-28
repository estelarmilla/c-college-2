#include <stdio.h>
#include <string.h>
int main(){
    typedef struct{
        char nome_e_sobrenome[50];
        int cpf;
        int idade;
        float media_final;
    } Turma;

    Turma aluno1, aluno2, aluno3, aluno4;

    strcpy(aluno1.nome_e_sobrenome, "Pedro Sander");
    aluno1.cpf = 12332123450;
    aluno1.idade = 17;
    aluno1.media_final = 7.59;

    strcpy(aluno2.nome_e_sobrenome, "Sara Walker");
    aluno2.cpf = 11022033040;
    aluno2.idade = 19;
    aluno2.media_final = 8.28;

    strcpy(aluno3.nome_e_sobrenome, "Noemi Pereira");
    aluno3.cpf = 10120230340;
    aluno3.idade = 18;
    aluno3.media_final = 8.00;

    strcpy(aluno4.nome_e_sobrenome, "Maria Moon");
    aluno4.cpf = 10020030004;
    aluno4.idade = 20;
    aluno4.media_final = 8.50;

    printf("%s, %d, tem %d anos e tem media final %.1f\n",
        aluno1.nome_e_sobrenome,
        aluno1.cpf,
        aluno1.idade,
        aluno1.media_final);

    printf("%s, %d, tem %d anos e tem media final %.1f\n",
        aluno2.nome_e_sobrenome,
        aluno2.cpf,
        aluno2.idade,
        aluno2.media_final);

    printf("%s, %d, tem %d anos e tem media final %.1f\n",
        aluno3.nome_e_sobrenome,
        aluno3.cpf,
        aluno3.idade,
        aluno3.media_final);

    printf("%s, %d, tem %d anos e tem media final %.1f\n",
        aluno4.nome_e_sobrenome,
        aluno4.cpf,
        aluno4.idade,
        aluno4.media_final);

    return 0;
}
