

	// [" CRIADOR: LUIZ ÂNGELO MARTINS "]:

	/*
	DESCRIÇÃO:
		PROGRAMA QUE VISA CONVERTER OS VALORES DAS PRINCIPAIS MOEDAS DO MUNDO:

		-Real,
		-Dólar Americano,
		-Dólar Australiano,
		-Dólar Canadense,
		-Euro,
		-Franco Suíço,
		-Iene,
		-Libra esterlina,
		-Lira Turca,
		-Peso Argentino,
		-Renmimbi.
		
	*/


	// COMPILADOR USADO:
		// DEV C++	


// IMPORTAÇÃO DE BIBLIOTECAS::
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.c>
#include <time.h>
#include <math.h>
#include <string.h>

// FUNÇÃO PRINCIPAL - MAIN:
int main() {
	
	// "PARAMETROS DE JANELA":
	system("mode 120 , 30");
	system("title CONVERSOR DE MOEDAS");
	
	// DECLARAÇÃO DE VARIAVEIS:
	int repetir = 0;
    int escolha1 = 0;
    char nome[20];
    float valor_moeda;
    float quantia_moeda;
    float resultado;
	
        while( repetir != 1 ) {
    
            strcpy(nome, "");
            system("cls");
            printf("\n\n");
            textcolor(12);
            printf("	MENU GERAL - CONVERSOR \n\n");
            printf("");
            textcolor(14);
            printf("	0 - SAIR. \n");
            textcolor(15);
	        printf("	1 - REAL. \n");
	        printf("	2 - EURO. \n");
	        printf("	3 - IENE. \n");
	        printf("	4 - DOLAR AMERICANO. \n");
	        printf("	5 - DOLAR AUSTRALIANO. \n");
	        printf("	6 - DOLAR CANADENSE. \n");
	        printf("	7 - FRANCO SUICO. \n");
	        printf("	8 - LIBRA ESTERLINA. \n");
	        printf("	9 - LIRA TURCA. \n");
	        printf("	10 - PESO ARGENTINO. \n");
	        printf("	11 - RENMIMBI. \n\n");
            printf("");
            textcolor(11);
            printf("	DIGITE SUA RESPOSTA: ");
            textcolor(10);
            scanf("%d" ,&escolha1 );
            
            switch( escolha1 ) {

                // CASO "0" - SAIR:
                case 0:
                    repetir = 1;
                break;

                // CASO "1" - REAL:
                case 1:
                	system("cls");
                    strcpy(nome, "REAL");
			        printf("");
			        printf("\n\n");
            		textcolor(12);
            		printf("	MENU GERAL - %s \n\n", nome);
			        textcolor(11);
			        printf("	DIGITE O VALOR UNITARIO ATUAL DE(A) %s (S) EM RELACAO A MOEDA DE INTERESSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&valor_moeda );
			        textcolor(11);
			        printf("	DIGITE A QUANTIA DE(A) %s (S) EM POSSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&quantia_moeda );
			        resultado = valor_moeda * quantia_moeda;
			        textcolor(14);
			        printf("\n\n");
                    printf("	VOCE TEM: %.2f DA MOEDA INTERESSADA EM POSSE.", resultado);
                    printf("\n\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
                break;
                
                // CASO "2" - EURO:
                case 2:
                	system("cls");
                    strcpy(nome, "EURO");
			        printf("");
			        printf("\n\n");
            		textcolor(12);
            		printf("	MENU GERAL - %s \n\n", nome);
			        textcolor(11);
			        printf("	DIGITE O VALOR UNITARIO ATUAL DE(A) %s (S) EM RELACAO A MOEDA DE INTERESSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&valor_moeda );
			        textcolor(11);
			        printf("	DIGITE A QUANTIA DE(A) %s (S) EM POSSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&quantia_moeda );
			        resultado = valor_moeda * quantia_moeda;
			        textcolor(14);
			        printf("\n\n");
                    printf("	VOCE TEM: %.2f DA MOEDA INTERESSADA EM POSSE.", resultado);
                    printf("\n\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
                break;
                
                // CASO "3" - IENE:
                case 3:
                	system("cls");
                    strcpy(nome, "IENE");
			        printf("");
			        printf("\n\n");
            		textcolor(12);
            		printf("	MENU GERAL - %s \n\n", nome);
			        textcolor(11);
			        printf("	DIGITE O VALOR UNITARIO ATUAL DE(A) %s (S) EM RELACAO A MOEDA DE INTERESSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&valor_moeda );
			        textcolor(11);
			        printf("	DIGITE A QUANTIA DE(A) %s (S) EM POSSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&quantia_moeda );
			        resultado = valor_moeda * quantia_moeda;
			        textcolor(14);
			        printf("\n\n");
                    printf("	VOCE TEM: %.2f DA MOEDA INTERESSADA EM POSSE.", resultado);
                    printf("\n\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
                break;
                    
                // CASO "4" - DÓLAR AMERICANO:
                case 4:
                	system("cls");
                    strcpy(nome, "DOLAR AMERICANO");
			        printf("");
			        printf("\n\n");
            		textcolor(12);
            		printf("	MENU GERAL - %s \n\n", nome);
			        textcolor(11);
			        printf("	DIGITE O VALOR UNITARIO ATUAL DE(A) %s (S) EM RELACAO A MOEDA DE INTERESSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&valor_moeda );
			        textcolor(11);
			        printf("	DIGITE A QUANTIA DE(A) %s (S) EM POSSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&quantia_moeda );
			        resultado = valor_moeda * quantia_moeda;
			        textcolor(14);
			        printf("\n\n");
                    printf("	VOCE TEM: %.2f DA MOEDA INTERESSADA EM POSSE.", resultado);
                    printf("\n\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
                break;
                
                // CASO "5" - DÓLAR AUSTRALIANO:
                case 5:
                    system("cls");
                    strcpy(nome, "DOLAR AUSTRALIANO");
			        printf("");
			        printf("\n\n");
            		textcolor(12);
            		printf("	MENU GERAL - %s \n\n", nome);
			        textcolor(11);
			        printf("	DIGITE O VALOR UNITARIO ATUAL DE(A) %s (S) EM RELACAO A MOEDA DE INTERESSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&valor_moeda );
			        textcolor(11);
			        printf("	DIGITE A QUANTIA DE(A) %s (S) EM POSSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&quantia_moeda );
			        resultado = valor_moeda * quantia_moeda;
			        textcolor(14);
			        printf("\n\n");
                    printf("	VOCE TEM: %.2f DA MOEDA INTERESSADA EM POSSE.", resultado);
                    printf("\n\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
                break;
                    
                // CASO "6" - DÓLAR CANADENSE:
                case 6:
                    system("cls");
                    strcpy(nome, "DOLAR CANADENSE");
			        printf("");
			        printf("\n\n");
            		textcolor(12);
            		printf("	MENU GERAL - %s \n\n", nome);
			        textcolor(11);
			        printf("	DIGITE O VALOR UNITARIO ATUAL DE(A) %s (S) EM RELACAO A MOEDA DE INTERESSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&valor_moeda );
			        textcolor(11);
			        printf("	DIGITE A QUANTIA DE(A) %s (S) EM POSSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&quantia_moeda );
			        resultado = valor_moeda * quantia_moeda;
			        textcolor(14);
			        printf("\n\n");
                    printf("	VOCE TEM: %.2f DA MOEDA INTERESSADA EM POSSE.", resultado);
                    printf("\n\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
                break;
                    
                // CASO "7" - FRANCO SUÍÇO:
                case 7:
                    system("cls");
                    strcpy(nome, "FRANCO SUICO");
			        printf("");
			        printf("\n\n");
            		textcolor(12);
            		printf("	MENU GERAL - %s \n\n", nome);
			        textcolor(11);
			        printf("	DIGITE O VALOR UNITARIO ATUAL DE(A) %s (S) EM RELACAO A MOEDA DE INTERESSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&valor_moeda );
			        textcolor(11);
			        printf("	DIGITE A QUANTIA DE(A) %s (S) EM POSSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&quantia_moeda );
			        resultado = valor_moeda * quantia_moeda;
			        textcolor(14);
			        printf("\n\n");
                    printf("	VOCE TEM: %.2f DA MOEDA INTERESSADA EM POSSE.", resultado);
                    printf("\n\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
                break;
                
                // CASO "8" - LIBRA ESTERLINA:
                case 8:
                    system("cls");
                    strcpy(nome, "LIBRA ESTERLINA");
			        printf("");
			        printf("\n\n");
            		textcolor(12);
            		printf("	MENU GERAL - %s \n\n", nome);
			        textcolor(11);
			        printf("	DIGITE O VALOR UNITARIO ATUAL DE(A) %s (S) EM RELACAO A MOEDA DE INTERESSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&valor_moeda );
			        textcolor(11);
			        printf("	DIGITE A QUANTIA DE(A) %s (S) EM POSSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&quantia_moeda );
			        resultado = valor_moeda * quantia_moeda;
			        textcolor(14);
			        printf("\n\n");
                    printf("	VOCE TEM: %.2f DA MOEDA INTERESSADA EM POSSE.", resultado);
                    printf("\n\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
                break;
                
                // CASO "9" - LIRA TURCA:
                case 9:
                    system("cls");
                    strcpy(nome, "LIRA TURCA");
			        printf("");
			        printf("\n\n");
            		textcolor(12);
            		printf("	MENU GERAL - %s \n\n", nome);
			        textcolor(11);
			        printf("	DIGITE O VALOR UNITARIO ATUAL DE(A) %s (S) EM RELACAO A MOEDA DE INTERESSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&valor_moeda );
			        textcolor(11);
			        printf("	DIGITE A QUANTIA DE(A) %s (S) EM POSSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&quantia_moeda );
			        resultado = valor_moeda * quantia_moeda;
			        textcolor(14);
			        printf("\n\n");
                    printf("	VOCE TEM: %.2f DA MOEDA INTERESSADA EM POSSE.", resultado);
                    printf("\n\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
                break;
                
                // CASO "10" - PESO ARGENTINO:
                case 10:
                    system("cls");
                    strcpy(nome, "PESO ARGENTINO");
			        printf("");
			        printf("\n\n");
            		textcolor(12);
            		printf("	MENU GERAL - %s \n\n", nome);
			        textcolor(11);
			        printf("	DIGITE O VALOR UNITARIO ATUAL DE(A) %s (S) EM RELACAO A MOEDA DE INTERESSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&valor_moeda );
			        textcolor(11);
			        printf("	DIGITE A QUANTIA DE(A) %s (S) EM POSSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&quantia_moeda );
			        resultado = valor_moeda * quantia_moeda;
			        textcolor(14);
			        printf("\n\n");
                    printf("	VOCE TEM: %.2f DA MOEDA INTERESSADA EM POSSE.", resultado);
                    printf("\n\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
                break;
                
                // CASO "11" - RENMIMBI:
                case 11:
                    system("cls");
                    strcpy(nome, "RENMIMBI");
			        printf("");
			        printf("\n\n");
            		textcolor(12);
            		printf("	MENU GERAL - %s \n\n", nome);
			        textcolor(11);
			        printf("	DIGITE O VALOR UNITARIO ATUAL DE(A) %s (S) EM RELACAO A MOEDA DE INTERESSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&valor_moeda );
			        textcolor(11);
			        printf("	DIGITE A QUANTIA DE(A) %s (S) EM POSSE: ", nome);
			        textcolor(10);
			        scanf("%f" ,&quantia_moeda );
			        resultado = valor_moeda * quantia_moeda;
			        textcolor(14);
			        printf("\n\n");
                    printf("	VOCE TEM: %.2f DA MOEDA INTERESSADA EM POSSE.", resultado);
                    printf("\n\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
                break;
                
                // VALORES INCORRETOS:
                default:
                    textcolor(14);
                	printf("\n");
                    printf("	VALOR INVALIDO! \n");
                    printf("	POR FAVOR TENTE NOVAMENTE!");
                    printf("\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");

            }

        }
         
    textcolor(10);    
    printf("\n");
	return 0;
	
}





