/*Descri��o do Projeto 01:

Utilizando os conceitos de vetor, implemente um algoritmo que:

    inclua at� 1000 usu�rios; ****
    edite um usu�rio;//marcela(apoio do Daniel)
    exclua um usu�rio;//duda(apoio alisson)
    busque um usu�rio pelo email;//alisson
    imprima todos os usu�rios cadastrados;//duda
    fa�a backup dos usu�rios cadastrados;//Daniel e alisson
    fa�a restaura��o dos dados;//Duda e Marcela

Dados do usu�rio:

    Id (int) => preenchido automaticamente por n�meros rand�micos ****
    Nome completo (string) ****
    Email (string) => valida��o do campo: verificar se o caractere "@" aparece ****
    Sexo (string) => valida��o do campo: aceitar somente as palavras Feminino, Masculino e N�o declarar****
    Endere�o (string) ****
    Altura (double) => valida��o do campo: aceitar valores entre 1 e 2 ****
    Vacina (tomou a vacina? boolean) -> usou int ****

Duas equipes ser�o sorteadas para realizar a apresenta��o do projeto, tendo 15 min para cada apresenta��o.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main (){
 	
 	int i,  id[1000] ;
	int tempo = time(0);
 	char nome[1000][50] , email[1000][50] , sexo[1000][15] , endereco[1000][50];
 	double altura[1000];
 	int vacina[1000];
 	
 	for(i = 0; i < 1000; i++){
 		int continua;	
		printf("Deseja inserir um usu�rio  1 ou 0?");
		fflush(stdin);
		scanf("%d", &continua);
		 
		 if(continua == 0){
		   	printf("Pessoas cadastradas %d\n",i);
		 	break;
		 }
		 
		//ID
	    srand(tempo);
	    id[i] = rand();
	    printf("%d\n",id[i]);
	 
	
	 	//NOME
	 	printf("Me forneca o nome:");
	 	fflush(stdin);
	 	fgets(nome[i],50,stdin);
	 
	 	
	 	//EMAIL
	 	printf("Me forneca o email:");
	 	fflush(stdin);
	 	fgets(email[i],50,stdin);
			
		printf("\n%s", email[i]);
		
		//printf("%d", strchr(email[i], '@')==0);
		if(strchr(email[i], '@') == 0){
			printf("Email invalido\n");
			
			printf("Me forneca o email:");
	 		fflush(stdin);
	 		fgets(email[i],50,stdin);
		
		}
		else{
			printf("Email valido\n");
		}
		
		//SEXO
		printf("Me o sexo (Feminino, Masculino e N�o declarar):");
	 	fflush(stdin);
	 	fgets(sexo[i],50,stdin);
		
		if(strcmp(sexo[i], "Feminino") == 0 && strcmp(sexo[i], "Masculino") == 0 && strcmp(sexo[i], "Feminino") == 0){
			printf("Sexo invalido\n");
			
			printf("Me o sexo (Feminino, Masculino e N�o declarar):");
	 		fflush(stdin);
	 		fgets(sexo[i],50,stdin);
		}else{
			printf("Sexo valido");
		}
		
		
	 	//ENDERECO
	 	printf("Me forneca o endereco:");
	 	fflush(stdin);
	 	fgets(endereco[i],50,stdin);
		
		
		//ALTURA
		printf("Me forneca a altura:");
	 	fflush(stdin);
	 	scanf("%lf", &altura[i]);
	 	
	 	printf("%.2lf", altura[i]);
	 	
	 	if(altura[i] > 1.00 && altura[i] < 2.00){
			printf("T� valido\n"); 		
		 }
		 else{
		 	printf("Altura invalida\n");
		 	
		 	printf("Me forneca a altura:");
	 		fflush(stdin);
	 		scanf("%lf", &altura[i]);
		 }
		 
		 //VACINA
		 printf("Tomou vacina ? 1 - sim\n0 - nao\n> ");
		 fflush(stdin);
		 scanf("%d", &vacina[i]);
		 
		 printf("%i");
	}
	
	int deditar;
	printf("Deseja editar algum usu�rio 1 ou 0? ");
	fflush(stdin);
	scanf("%d", &deditar);//editar
	
	if(editar >= 1){
		int index;
		printf("Digite o index que voc� deseja editar: ");
		fflush(stdin);
		scanf("%d", &index); 
		
	}
	
	//excluir
	
	
	//busque
	
	//imprima
	
	
	//backup
	
	//restauracao
	
}
