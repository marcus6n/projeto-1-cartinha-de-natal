#include <stdio.h>
#include <stdlib.h>
#define N 100 

int main (){

int direcionador = 0;

char nome_padrinho [N];
char email_padrinho [N];
char telefone_padrinho [N];
char rua_padrinho [N];
char cep_padrinho [N];
char senha_padrinho [N];
float valor_doado;

char nome_responsavel [N];
char telefone_responsavel [N];
char rua_responsavel [N];
char cep_responsavel [N];

char nome_crianca [N];;
int idade_crianca;



printf("\n                                    -----------------------------------\n");
printf("                                                  CADASTRO");
printf("\n                                    -----------------------------------\n");

printf("\n                                                Bem vindo....\n\n");
printf("                Caso deseje contribuir com o projeto apadrinhando uma crianca, digite: 1\n\n");
printf("                              Caso seja um de nossos voluntarios, digite: 2\n\n");

scanf("%d", & direcionador);
fflush(stdin);

switch (direcionador){
    case 1:
        printf("\n                                    -----------------------------------\n");
        printf("                                            CADASTRO DO PADRINHO");
        printf("\n                                    -----------------------------------\n\n");
        printf("\nInforme seu nome: ");
        fgets (nome_padrinho, N, stdin);
        fflush(stdin);

        printf("\nInforme seu email: ");
        fgets (email_padrinho, N, stdin);
        fflush(stdin);

        printf("\nCrie uma senha: ");
        fgets (senha_padrinho, N, stdin);
        fflush(stdin);

        printf("\nInforme seu telefone: ");
        fgets (telefone_padrinho, N, stdin);
        fflush(stdin);

         printf("\nInforme seu endereco:");
         printf("\nRua: ");
        fgets (rua_padrinho, N, stdin);
        fflush(stdin);

        printf("CEP: ");
        fgets (cep_padrinho, N, stdin);
        fflush(stdin);

        printf("\nQual o valor a ser doado: ");
        scanf("%f", &valor_doado);
        fflush(stdin);

        printf("-------------------------------------------");

        printf("\n\nInformacoes cadastradas:\n\n");

        printf("Nome ......: %s\n", nome_padrinho);
        printf("Email ......: %s\n", email_padrinho);
        printf("Senha ......: %s\n", senha_padrinho);
        printf("Telefone ......: %s\n", telefone_padrinho);
        printf("Rua ......: %s\n", rua_padrinho);
        printf("CEP ......: %s\n", cep_padrinho);
        printf("Valor doado ......: R$%.2f", valor_doado);

        break;
    case 2:
        printf("\nInforme o nome do responsavel: ");
        fgets (nome_responsavel, N, stdin);
        fflush(stdin);

        printf("\nInforme o telefone do responsavel: ");
        fgets (telefone_responsavel, N, stdin);
        fflush(stdin);

        printf("\nInforme o endereco do responsavel:");
         printf("\nRua: ");
        fgets (rua_responsavel, N, stdin);
        fflush(stdin);

        printf("CEP: ");
        fgets (cep_responsavel, N, stdin);
        fflush(stdin);

        printf("\n                                    -----------------------------------\n");
        printf("                                            CADASTRO DA CRIANCA");
        printf("\n                                    -----------------------------------\n\n");

        printf("Informe o nome da crianca: ");
        fgets (nome_crianca, N, stdin);
        fflush(stdin);

        printf("\nInforme a idade da crianca: ");
        scanf("%d", & idade_crianca);
        fflush(stdin);
        
        printf("-------------------------------------------");

        printf("\n\nInformacoes cadastradas do responsavel:\n\n");

        printf("Nome ......: %s\n", nome_responsavel);
        printf("Telefone ......: %s\n", telefone_responsavel);
        printf("Rua ......: %s\n", rua_responsavel);
        printf("CEP ......: %s\n", cep_responsavel);

        printf("\n\nInformacoes cadastradas da crianca:\n\n");

        printf("Nome ......: %s\n", nome_crianca);
        printf("Idade ......: %d \n\n", idade_crianca);
        printf("Faca o upload da cartinha digitalizada aqui ......:\n");
        printf("  ----------------------------------------------\n");
        printf("|                                               |\n");   
        printf("|                                               |\n");
        printf("|                                               |\n");
        printf("|               CARTA DA CRIANCA                |\n");
        printf("|                                               |\n");
        printf("|                                               |\n");
        printf("  ----------------------------------------------");
    break;
    default:
        printf("\nValor invalido!");

}

printf("\n\n");

system ("pause");

return 0;

}