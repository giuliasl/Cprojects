#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
    char alunos [10][60];
    int i;
    for (i = 0; i < 10; i++) {
        printf ("\n\nDigite um nome de aluno: ");
        gets (alunos [i]);
    }
    printf ("\n\n Alunos da turma:\n\n");
    for (i = 0; i < 10; i++) {
        puts (alunos [i]);
    }
    system ("pause");        
}   
