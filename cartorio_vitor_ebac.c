#include <stdio.h> //biblioteca de comunica��o com o usuario
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��es de texto pot regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() // Fun��o responsavel por cadastrar os usu�rios no sistema
{
	  //inicio cria��o de vari�veis/string
	   char arquivo[40];
	   char cpf[40];
	   char nome[40];
	   char sobrenome[40];
	   char cargo[40];
	  //Final da cria��o de vari�veis/string
	   
	   printf("Digite o cpf a ser cadastrado:"); //coletando inform��es do usu�rio
	   scanf("%s", cpf); //refere-se a string
	   
	   strcpy(arquivo, cpf); //responsavel por copiar os valores das strings
	   
	   FILE *file; //cria o arquivo
	   file = fopen(arquivo, "w"); //cria o arquivo "w" siginifica escrever
	   fprintf(file,cpf); //salva o valor da variavel
	   fclose(file); //fecha o arquivo
	   
	   file = fopen(arquivo, "a"); // criando arquivo
	   fprintf(file,","); //salvando a variavel
	   fclose(file); //fechando arquivo
	   
	   printf("digite o nome a ser cadastrado:"); //coletando nome do usu�rio
	   scanf("%s",nome); // escaneando as string
	   
	   file = fopen(arquivo, "a"); //criando arquivo
	   fprintf(file,nome); //salvando a variavel
	   fclose(file); //fechando arquivo
	   
	   file = fopen(arquivo, "a"); //criando arquivo
	   fprintf(file,","); //salvando variavel
	   fclose(file); //fechando arquivo
	   
	   printf("digite o sobrenome a ser cadastrado:"); //coletando sobrenome do usu�rio
	   scanf("%s", sobrenome); // escaneando as strings
	   
	   file = fopen(arquivo, "a"); //criando arquivo
	   fprintf(file,sobrenome); //salvando a variavel
	   fclose(file); //fechando arquivo
	   
	   file = fopen(arquivo, "a"); //criando arquivo
	   fprintf(file,","); //salvando variavel
	   fclose(file); //fechando arquivo
	   
	   printf("Digite o cargo a ser cadastrado:"); //coletando cargo do usu�rio
	   scanf("%s", cargo); //escaneando as strings
	   
	   file = fopen(arquivo, "a"); //criando arquivo
	   fprintf(file,cargo); //salvando a variavel
	   fclose(file); //fechando arquivo
	   
	   system("pause"); //pausando a tela do sistema
}

int consulta()//Fun��o de consultar os registros
{
	  setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	  //inicio das variaveis/strings
	  char cpf[40];
	  char conteudo[200];
	  //fim das variaveis strings 
	  
	  printf("Digite o cpf a ser consultado"); //coletando dados do usu�rio
	  scanf("%s", cpf); // escaneando arquivo cpf
	  
	  FILE *file; //criando aquivo
	  file = fopen(cpf, "r"); //cria o arquivo "r" que significa ler
	  
	  if(file == NULL) //arquivo igual a nulo
	  {
	  	printf("Arquivo n�o foi localizado ! \n"); //Aviso que os dado n�o foram localizados
	  }
	  
	  while(fgets(conteudo, 200, file) != NULL) //enquanto estiver no arquivo ele vai rodar 200 vezes e quando n�o acha � nulo
	  {
	  	printf("\nEssa s�o as informa��es do usu�rio:"); //aviso sobre os dados do usu�rio
	  	printf("%s", conteudo); //mostrando os dados
	  	printf("\n\n"); //pulando linha
	  }
	  
	    system("pause"); //pausando a tela do sistema

}

int deletar() //inicio da fun��o deletar 
{
	    //inicio das variaveis/strings
		char cpf[40];
	    // fim das variaveis
	    
	    printf("Digite cpf a ser deletado: "); //criando arquivo
	    scanf("%s", cpf); //escaneando cpf
	    
	    remove(cpf); //fun��o remover cpf
	    
	    FILE *file; //criando arquivo
	    file = fopen(cpf, "r"); //criando arquivo "r" que significa ler
	    
	    if(file == NULL) //arquivo igual a nulo
	    { 
	    printf("O usu�rio n�o se encontra no sistema!\n"); //aviso de dados nao encotrado
	    system("pause"); //pausando tela do sistema
		}
}

int main ()
{
       int opcao=0; //Definindo vari�veis
       int laco=1;  //Definindo variaveis
       
	   for(laco=1;laco=1;) //variavel laco � a 1
	   {
	
       system("cls"); //limpar a tela do sistema
       
	   setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
       
	   printf("### Cart�rio da EBAC ###\n\n"); //Inicio do menu
       printf("Escolha a op��o desejada do menu: \n\n");
       printf("\t1 - Registrar nomes\n");
       printf("\t2 - Consultar nomes\n");
       printf("\t3 - Deletar nomes\n"); 
       printf("Op��o:"); // Fim do menu
       
       scanf("%d", &opcao); //Armazenamento a escolha do usu�rio
       
       system("cls"); //responsavel por limpar a tela
       
       
       switch(opcao)
       {
       	  case 1:
       	  registro(); //chamada de fun��es
       	  break; //encerando fun��o
       	  
       	  case 2:
       	  consulta(); //chamando a fun��o
		  break; //emcerrando a fun��o
       	  
       	  case 3:
       	  deletar(); //chamndo a fun��o
       	  break; //encerrando a fun��o
       	  
       	  default:
       	  printf("Essa op��o n�o est� disponivel !\n"); //aviso que ano existe a op��o
	   	  system("pause"); //pausando a tela do sistema
	   	  break; //enerrando a fun��o
	   
	   } //Fim da sele��o
       
    
	   	  
	   
	   
	   
	   
       }   //fechamento do for, parte de repeti��o
}
