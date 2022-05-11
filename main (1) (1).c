#include <stdio.h>
#include <stdlib.h>


struct mn {

  int matricula;
  char  nome [30];
  float prova1;
  float prova2;
  float prova3;
}aluno[20];
int totalalunos;

int main(){
  //declara funcao

  void dadosalunos ( );
  //void nota ( );
  //void media ( );
  void aprova( );

 printf(" DAVI FELIPE FUHR - STRUCT -> SEGUNDO\n");

  //chama funcao
  dadosalunos ( );
  aprova ( );
 // nota ( );
  
  printf("(esta incompleto, até o momento só calculei as medias e dei aprovação para os alunos, o resto tive dificuldade e nao consegui realizar a tempo).");
  return 0;
}
//coleta os dadso dos alunos
void dadosalunos ( ) {
printf("Digite a quantidade de alunos (ate 20 alunos): ");
scanf("%i", &totalalunos);

 for (int i=0; i <totalalunos; i++){
   
  
    //matricula
    printf("\nDigite os dados do aluno %i: \n", i+1);
    printf("Matricula: ");
    scanf("%i", &aluno[i].matricula);
    //nome
    printf("Nome: ");
    scanf("%s", &aluno[i].nome);
    //prova1
    printf("Prova 1: ");
    scanf("%f", &aluno[i].prova1);
    //prova2
    printf("Prova 2: ");
    scanf("%f", &aluno[i].prova2);
    //prova3
    printf("Prova 3: ");
    scanf("%f", &aluno[i].prova3);
  }
}
//aprovacao alunos (nome, media e aprovacao)
void aprova( ){
float media;

printf("\n\nMedia dos alunos:\n");
for (int i=0; i < totalalunos; i++){
printf("Aluno %i\nNome: ", i+1);

for (int j=0; j<30 && aluno[i].nome[j] != '\0'; j++){
printf("%c", aluno[i].nome[j]);
}

  media = (aluno[i].prova1 + aluno[i].prova2 + aluno[i].prova3) /3;
  printf("  Media: %.2f ", media);

  if (media < 6){
    printf("REPROVADO\n\n");
  } else printf("APROVADO\n\n");

}
}


