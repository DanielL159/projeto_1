/*Descrição do Projeto 01:
Utilizando os conceitos de vetor, implemente um algoritmo que:
 //TODOS QUE TIVEREM Asterisco* JA FORAM FEITOS.
 //ATENÇAO PRA FUNCAO DE CADA UM 
 
    inclua até 1000 usuários; ****
    edite um usuário;//marcela(apoio do Daniel) ****
    exclua um usuário;//duda(apoio alisson)
    busque um usuário pelo email;//alisson
    imprima todos os usuários cadastrados;//Daniel
    faça backup dos usuários cadastrados;//Daniel e alisson
    faça restauração dos dados;//Duda e Marcela
    
    Por ultimo faremos uma reuniao pra editar e melhorar esse codigo , antes da entrega .//Daniel, Alisson, Marcela, Duda.
Dados do usuário:
    Id (int) => preenchido automaticamente por números randômicos ****
    Nome completo (string) ****
    Email (string) => validação do campo: verificar se o caractere "@" aparece ****
    Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Não declarar****
    Endereço (string) ****
    Altura (double) => validação do campo: aceitar valores entre 1 e 2 ****
    Vacina (tomou a vacina? boolean) -> usou int ****
Duas equipes serão sorteadas para realizar a apresentação do projeto, tendo 15 min para cada apresentação.*/

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
 	
	
	int continua = 1;
	i = 0;
 	
	int opcao;
	do{
		printf("O que voce deseja fazer agora ?\n");
		printf("inclua ate 1000 usuarios: 1\nedite um usuario: 2\nexclua um usuario: 3\nbusque um usuario pelo email: 4\nimprima todos os usuarios cadastrados: 5\nfaca backup dos usuarios cadastrados: 6\nfaca restauracao dos dados: 7\nFinaliza o programa: 8\n");


	do{
 		int continua;	
		printf("Deseja inserir um usuario  1 ou 0: ");
		fflush(stdin);
		scanf("%d", &continua);
		 
		 if(continua == 0){
		   	printf("Pessoas cadastradas %d\n\n", i);
		 	break;
		 }
		 
		//ID
	    srand(tempo);
	    id[i] = rand();
	    printf("%d\n",id[i]);
	 
	
	 	//NOME
	 	printf("Me forneca o nome: ");
	 	fflush(stdin);
	 	fgets(nome[i],50,stdin);
	 
	 	
	 	//EMAIL
	 	printf("Me forneca o email: ");
	 	fflush(stdin);
	 	fgets(email[i],50,stdin);
			
		printf("\n%s", email[i]);
		
		//printf("%d", strchr(email[i], '@')==0);
		if(strchr(email[i], '@') == 0){
			printf("Email invalido\n");
			
			printf("Me forneca um email valido: ");
	 		fflush(stdin);
	 		fgets(email[i],50,stdin);
		
		}
		
		//SEXO
		printf("Forneca o sexo (Feminino, Masculino e Nao declarar): ");
	 	fflush(stdin);
	 	fgets(sexo[i],50,stdin);
		
		if(strcmp(sexo[i], "Feminino") == 0 && strcmp(sexo[i], "Masculino") == 0 && strcmp(sexo[i], "Nao declarar") == 0){
			printf("Sexo invalido\n");
			
			printf("Forneca o sexo (Feminino, Masculino e Nao declarar): ");
	 		fflush(stdin);
	 		fgets(sexo[i],50,stdin);
		}
		
		
	 	//ENDERECO
	 	printf("Me forneca o endereco: ");
	 	fflush(stdin);
	 	fgets(endereco[i],50,stdin);
		
		
		//ALTURA
		printf("Me forneca a altura: ");
	 	fflush(stdin);
	 	scanf("%lf", &altura[i]);
	 	
	 	//printf("%.2lf", altura[i]);
	 	
	 	if(altura[i] < 1.00 || altura[i] > 2.00){
			printf("Altura invalida\n"); 		
		 	
		 	printf("Me forneca a altura: ");
	 		fflush(stdin);
	 		scanf("%lf", &altura[i]);
		 }
		 
		 //VACINA
		 printf("Tomou vacina (1 ou 0): ");
		 fflush(stdin);
		 scanf("%d", &vacina[i]);
		 
		i++;

	}while(continua != 0);
	
	printf("%d", i);

	int j;
	for(j = 0; j < i; j++){
		printf("Id: %d\nNome: %sEmail: %sSexo: %Sendereco: %saltura: %.2f\nvacinou: %d\n\n", id[j], nome[j], email[j], sexo[j], endereco[j], altura[j], vacina[j]);
	}


	int editar;
	printf("Deseja editar algum usuario 1 ou 0: ");
	fflush(stdin);
	scanf("%d", &editar);//editar
	//[i]

	if(editar >= 1){
		int index, opcao;
		printf("Digite o index que voce deseja editar: ");
		fflush(stdin);
		scanf("%d", &index); 

		printf("Qual informacao voce deseja alterar ?\n1: Nome\n2: Email\n3: Sexo\n4: Endereco\n5: Altura\n6: Vacina\n\nDigite o numero: ");
        fflush(stdin);
		scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Me forneca o nome: ");
	 	    fflush(stdin);
	 	    fgets(nome[index], 50,stdin);
	 
            break;
        
        case 2:
            printf("Me forneca o email: ");
	 	fflush(stdin);
	 	fgets(email[index], 50,stdin);
			
		printf("\n%s", email[i]);
		
		if(strchr(email[index], '@') == 0){
			printf("Email invalido\n");
			
			printf("Me forneca o email: ");
	 		fflush(stdin);
	 		fgets(email[index], 50,stdin);
		
		}


            break;
        case 3:
            printf("Forneca o sexo (Feminino, Masculino e Nao declarar): ");
            fflush(stdin);
            fgets(sexo[index], 50,stdin);
            
            if(strcmp(sexo[index], "Feminino") == 0 && strcmp(sexo[index], "Masculino") == 0 && strcmp(sexo[index], "Nao declarar") == 0){
                printf("Sexo invalido\n");
                
                printf("Forneca o sexo (Feminino, Masculino e Nao declarar): ");
                fflush(stdin);
                fgets(sexo[index], 50,stdin);
            }
            break;
        
        case 4:
            printf("Me forneca o endereco: ");
	 	    fflush(stdin);
	 	    fgets(endereco[index], 50,stdin);
            break;

        case 5:
			//ALTURA
			printf("Me forneca a altura: ");
			fflush(stdin);
			scanf("%lf", &altura[i]);
			

			
			if(altura[i] < 1.00 || altura[i] > 2.00){
				printf("Altura invalida\n"); 		
				
				printf("Me forneca a altura: ");
				fflush(stdin);
				scanf("%lf", &altura[i]);
		 }
		 
            break;
        
        case 6:
            printf("Tomou vacina (1 ou 0): ");
		    fflush(stdin);
		    scanf("%d", &vacina[index]);
		     printf("%i");
           break;

        default:
            printf("\nOpcao invalida\n");
            break;
        } 

        printf("%s", endereco[0]);

	}
	
	//excluir
	/*
	int exclui;
	printf("Deseja excluir algum usuario (0 ou 1): ");
	fflush(stdin);
	scanf("%d", &exclui);
	if(exclui == 1){
        printf("Digite  usuario: ");
        fflush(stdin);
        scanf("%d", &exclui);

        int j;
        for(j = exclui; j != i; j++){
		
		id[j] = id[j + 1];
		strcpy(nome[j], nome[j + 1]);
		strcpy(email[j], email[j + 1]);
		strcpy(sexo[j], sexo[j + 1]);
		strcpy(endereco[j], endereco[j + 1]);
		altura[j] = altura[j + 1];
		vacina[j] = vacina[j + 1];
		
	    }
    }
	
	
*/
	//busque
	
    int pesquisa;
    char pemail[50];
	printf("Deseja buscar por algum usuario 0 ou 1: ");
    fflush(stdin);
    scanf("%d", &pesquisa);

	if(pesquisa == 1){
        printf("Digite o email do usuario: ");
        fflush(stdin);
        fgets(pemail, 50, stdin);
    }
	
	//backup
	
	
	
	//restauracao




	
	for(j = 0; j < i; j++){
		printf("Id: %d\nNome: %sEmail: %sSexo: %Sendereco: %saltura: %.2f\nvacinou: %d\n\n", id[j], nome[j], email[j], sexo[j], endereco[j], altura[j], vacina[j]);
	}
	}while(opcao != 8);
}