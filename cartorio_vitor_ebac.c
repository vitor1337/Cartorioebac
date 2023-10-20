#include <stdio.h> //biblioteca de comunicação com o usuario
#include <stdlib.h> //biblioteca de alocação de espaço de memória
#include <locale.h> //biblioteca de alocações de texto pot região
#include <string.h> //biblioteca responsável por cuidar das string

int registro() // Função responsavel por cadastrar os usuários no sistema
{
	  //inicio criação de variáveis/string
	   char arquivo[40];
	   char cpf[40];
	   char nome[40];
	   char sobrenome[40];
	   char cargo[40];
	  //Final da criação de variáveis/string
	   
	   printf("Digite o cpf a ser cadastrado:"); //coletando informções do usuário
	   scanf("%s", cpf); //refere-se a string
	   
	   strcpy(arquivo, cpf); //responsavel por copiar os valores das strings
	   
	   FILE *file; //cria o arquivo
	   file = fopen(arquivo, "w"); //cria o arquivo "w" siginifica escrever
	   fprintf(file,cpf); //salva o valor da variavel
	   fclose(file); //fecha o arquivo
	   
	   file = fopen(arquivo, "a"); // criando arquivo
	   fprintf(file,","); //salvando a variavel
	   fclose(file); //fechando arquivo
	   
	   printf("digite o nome a ser cadastrado:"); //coletando nome do usuário
	   scanf("%s",nome); // escaneando as string
	   
	   file = fopen(arquivo, "a"); //criando arquivo
	   fprintf(file,nome); //salvando a variavel
	   fclose(file); //fechando arquivo
	   
	   file = fopen(arquivo, "a"); //criando arquivo
	   fprintf(file,","); //salvando variavel
	   fclose(file); //fechando arquivo
	   
	   printf("digite o sobrenome a ser cadastrado:"); //coletando sobrenome do usuário
	   scanf("%s", sobrenome); // escaneando as strings
	   
	   file = fopen(arquivo, "a"); //criando arquivo
	   fprintf(file,sobrenome); //salvando a variavel
	   fclose(file); //fechando arquivo
	   
	   file = fopen(arquivo, "a"); //criando arquivo
	   fprintf(file,","); //salvando variavel
	   fclose(file); //fechando arquivo
	   
	   printf("Digite o cargo a ser cadastrado:"); //coletando cargo do usuário
	   scanf("%s", cargo); //escaneando as strings
	   
	   file = fopen(arquivo, "a"); //criando arquivo
	   fprintf(file,cargo); //salvando a variavel
	   fclose(file); //fechando arquivo
	   
	   system("pause"); //pausando a tela do sistema
}

int consulta()//Função de consultar os registros
{
	  setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	  //inicio das variaveis/strings
	  char cpf[40];
	  char conteudo[200];
	  //fim das variaveis strings 
	  
	  printf("Digite o cpf a ser consultado"); //coletando dados do usuário
	  scanf("%s", cpf); // escaneando arquivo cpf
	  
	  FILE *file; //criando aquivo
	  file = fopen(cpf, "r"); //cria o arquivo "r" que significa ler
	  
	  if(file == NULL) //arquivo igual a nulo
	  {
	  	printf("Arquivo não foi localizado ! \n"); //Aviso que os dado não foram localizados
	  }
	  
	  while(fgets(conteudo, 200, file) != NULL) //enquanto estiver no arquivo ele vai rodar 200 vezes e quando não acha é nulo
	  {
	  	printf("\nEssa são as informações do usuário:"); //aviso sobre os dados do usuário
	  	printf("%s", conteudo); //mostrando os dados
	  	printf("\n\n"); //pulando linha
	  }
	  
	    system("pause"); //pausando a tela do sistema

}

int deletar() //inicio da função deletar 
{
	    //inicio das variaveis/strings
		char cpf[40];
	    // fim das variaveis
	    
	    printf("Digite cpf a ser deletado: "); //criando arquivo
	    scanf("%s", cpf); //escaneando cpf
	    
	    remove(cpf); //função remover cpf
	    
	    FILE *file; //criando arquivo
	    file = fopen(cpf, "r"); //criando arquivo "r" que significa ler
	    
	    if(file == NULL) //arquivo igual a nulo
	    { 
	    printf("O usuário não se encontra no sistema!\n"); //aviso de dados nao encotrado
	    system("pause"); //pausando tela do sistema
		}
}

int main ()
{
       int opcao=0; //Definindo variáveis
       int laco=1;  //Definindo variaveis
       
	   for(laco=1;laco=1;) //variavel laco é a 1
	   {
	
       system("cls"); //limpar a tela do sistema
       
	   setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
       
	   printf("### Cartório da EBAC ###\n\n"); //Inicio do menu
       printf("Escolha a opção desejada do menu: \n\n");
       printf("\t1 - Registrar nomes\n");
       printf("\t2 - Consultar nomes\n");
       printf("\t3 - Deletar nomes\n"); 
       printf("Opção:"); // Fim do menu
       
       scanf("%d", &opcao); //Armazenamento a escolha do usuário
       
       system("cls"); //responsavel por limpar a tela
       
       
       switch(opcao)
       {
       	  case 1:
       	  registro(); //chamada de funções
       	  break; //encerando função
       	  
       	  case 2:
       	  consulta(); //chamando a função
		  break; //emcerrando a função
       	  
       	  case 3:
       	  deletar(); //chamndo a função
       	  break; //encerrando a função
       	  
       	  default:
       	  printf("Essa opção não está disponivel !\n"); //aviso que ano existe a opção
	   	  system("pause"); //pausando a tela do sistema
	   	  break; //enerrando a função
	   
	   } //Fim da seleção
       
    
	   	  
	   
	   
	   
	   
       }   //fechamento do for, parte de repetição
}
