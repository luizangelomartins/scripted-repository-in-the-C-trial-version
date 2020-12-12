

	// [" CRIADOR: LUIZ ÂNGELO MARTINS "]:

	/*
	DESCRIÇÃO:
		PROJETO DE CALCULOS QUE CONSISTE EM:
		
		- DIVISÃO,
		- MULTIPLICAÇÃO,
		- POTÊNCIAÇÃO,
		- RADICIAÇÃO,
		- SOMA,
		- SUBTRAÇÃO.
		
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

// FUNÇÃO PRINCIPAL - MAIN:
int main() {
	
	// "PARAMETROS DE JANELA":
	system("mode 90 , 50");
	system("title CALCULADORA SIMPLES");
	
	// DECLARAÇÃO DE VARIAVEIS:
	int repetir = 1;
    int escolha_usuario = 0;
	int repetir_conta = 1;
    int escolha_conta = 0;
    float val1 = 0;
    float val2 = 0;
        
        while( repetir != 0 ) {
        
        repetir = 1;
	    escolha_usuario = 0;
		repetir_conta = 1;
	    escolha_conta = 0;
	    val1 = 0;
	    val2 = 0;
        
            // EXIBIÇÃO DO MENU:
            system("cls");
            printf("\n\n");
            textcolor(12);
            printf("	CALCULADORA SIMPLES: \n");
            printf("	MENU PRINCIPAL \n\n");
            textcolor(15);
            printf("");
            printf("	0 - SAIR. \n");
            printf("	1 - SOMAR. \n");
            printf("	2 - SUBTRAIR. \n");
            printf("	3 - MULTIPLICAR. \n");
            printf("	4 - DIVIDIR. \n");
            printf("	5 - RAIZ QUADRADA. \n");
            printf("	6 - POTENCIACAO. \n\n");
            printf("");
            textcolor(11);
            printf("	DIGITE SUA RESPOSTA: ");
            textcolor(10);
            scanf("%d" ,&escolha_usuario );

            switch( escolha_usuario ) {

                // CASO "0" - SAIR:
                case 0:
                    repetir = 0;
                break;

                // CASO "1" - SOMAR:
                case 1:
                     
			        repetir_conta = 1;
			        val1 = 0;
			        val2 = 0;
			        
			        while( repetir_conta != 0 ) {
		            
		            	system("cls");
		                printf("\n\n");
		                textcolor(10);
		                printf("	MENU - SOMAR");
		                printf("\n\n");
		                textcolor(15);
		                printf("	0 - VOLTAR AO MENU PRINCIPAL. \n");
		                printf("	1 - ADICIONAR VALOR INICIAL. \n");
		                printf("	2 - SOMAR VALORES. \n");
		                textcolor(14);
		                printf("		| TOTAL DA SOMA: %.2f", val2);
		                printf("\n\n");
		                textcolor(11);
		                printf("	DIGITE SUA RESPOSTA: ");
		                textcolor(10);
		                scanf("%d" ,&escolha_conta );
		
		                switch( escolha_conta ) {
		
		                    // CASO "0" - VOLTAR AO MENU PRINCIPAL:
		                    case 0:
		                        val1 = 0;
			        			val2 = 0;
		                        repetir_conta = 0;
		                    break;
		
		                    // CASO "1" - ADICIONAR VALOR INICIAL:
		                    case 1:
		                        printf("\n");
		                        textcolor(11);
		                        printf("	DIGITE O VALOR INICIAL PARA SOMA: ");
		                        textcolor(10);
		                        scanf("%f" ,&val2 );
		                    break;
		                    
		                    // CASO "2" - ADICIONAR VALORES | [ SOMAR ]:
		                    case 2:
		                        printf("\n");
		                        textcolor(11);
		                        printf("	DIGITE O VALOR PARA ADICAO: ");
		                        textcolor(10);
		                        scanf("%f" ,&val1 );
		                        val2 = val2 + val1;
		                     break;
		
		                     // VALORES INVALIDOS:
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
			        
                break;
                
                // CASO "2" - SUBTRAIR:
                case 2:
                       
			        repetir_conta = 1;
			        val1 = 0;
			        val2 = 0;
			        
			        while( repetir_conta != 0 ) {
		            
		            	system("cls");
		                printf("\n\n");
		                textcolor(10);
		                printf("	MENU - SUBTRAIR");
		                printf("\n\n");
		                textcolor(15);
		                printf("	0 - VOLTAR AO MENU PRINCIPAL. \n");
		                printf("	1 - ADICIONAR VALOR INICIAL. \n");
		                printf("	2 - SUBTRAIR VALORES. \n");
		                textcolor(14);
		                printf("		| TOTAL DA SUBTRACAO: %.2f", val2);
		                printf("\n\n");
		                textcolor(11);
		                printf("	DIGITE SUA RESPOSTA: ");
		                textcolor(10);
		                scanf("%d" ,&escolha_conta );
		
		                switch( escolha_conta ) {
		
		                    // CASO "0" - VOLTAR AO MENU PRINCIPAL:
		                    case 0:
		                        val1 = 0;
			        			val2 = 0;
		                        repetir_conta = 0;
		                    break;
		
		                    // CASO "1" - ADICIONAR VALOR INICIAL:
		                    case 1:
		                        printf("\n");
		                        textcolor(11);
		                        printf("	DIGITE O VALOR INICIAL PARA SUBTRAIR: ");
		                        textcolor(10);
		                        scanf("%f" ,&val2 );
		                    break;
		                    
		                    // CASO "2" - ADICIONAR VALORES | [ SUBTRAIR ]:
		                    case 2:
		                        printf("\n");
		                        textcolor(11);
		                        printf("	DIGITE O VALOR PARA SUBTRAIR: ");
		                        textcolor(10);
		                        scanf("%f" ,&val1 );
		                        val2 = val2 - val1;
		                     break;
		
		                     // VALORES INVALIDOS:
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
			        
                break;
                    
                // CASO "3" - MULTIPLICAR:
                case 3:
                        
			        repetir_conta = 1;
			        val1 = 0;
			        val2 = 0;
			        
			        while( repetir_conta != 0 ) {
		            
		            	system("cls");
		                printf("\n\n");
		                textcolor(10);
		                printf("	MENU - MULTIPLICAR");
		                printf("\n\n");
		                textcolor(15);
		                printf("	0 - VOLTAR AO MENU PRINCIPAL. \n");
		                printf("	1 - ADICIONAR VALOR INICIAL. \n");
		                printf("	2 - MULTIPLICAR VALORES. \n");
		                textcolor(14);
		                printf("		| TOTAL DA MULTIPLICAO: %.2f", val2);
		                printf("\n\n");
		                textcolor(11);
		                printf("	DIGITE SUA RESPOSTA: ");
		                textcolor(10);
		                scanf("%d" ,&escolha_conta );
		
		                switch( escolha_conta ) {
		
		                    // CASO "0" - VOLTAR AO MENU PRINCIPAL:
		                    case 0:
		                        val1 = 0;
			        			val2 = 0;
		                        repetir_conta = 0;
		                    break;
		
		                    // CASO "1" - ADICIONAR VALOR INICIAL:
		                    case 1:
		                        printf("\n");
		                        textcolor(11);
		                        printf("	DIGITE O VALOR INICIAL PARA MULTIPLICAR: ");
		                        textcolor(10);
		                        scanf("%f" ,&val2 );
		                    break;
		                    
		                    // CASO "2" - ADICIONAR VALORES | [ MULTIPLICAR ]:
		                    case 2:
		                        printf("\n");
		                        textcolor(11);
		                        printf("	DIGITE O VALOR PARA MULTIPLICAR: ");
		                        textcolor(10);
		                        scanf("%f" ,&val1 );
		                        val2 = val2 * val1;
		                     break;
		
		                     // VALORES INVALIDOS:
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
			        
                break;
                    
                // CASO "4" - DIVIDIR:
                case 4:
                       
			        repetir_conta = 1;
			        val1 = 0;
			        val2 = 0;
			        
			        while( repetir_conta != 0 ) {
		            
		            	system("cls");
		                printf("\n\n");
		                textcolor(10);
		                printf("	MENU - DIVIDIR");
		                printf("\n\n");
		                textcolor(15);
		                printf("	0 - VOLTAR AO MENU PRINCIPAL. \n");
		                printf("	1 - ADICIONAR VALOR INICIAL. \n");
		                printf("	2 - DIVIDIR VALORES. \n");
		                textcolor(14);
		                printf("		| TOTAL DA DIVISAO: %.2f", val2);
		                printf("\n\n");
		                textcolor(11);
		                printf("	DIGITE SUA RESPOSTA: ");
		                textcolor(10);
		                scanf("%d" ,&escolha_conta );
		
		                switch( escolha_conta ) {
		
		                    // CASO "0" - VOLTAR AO MENU PRINCIPAL:
		                    case 0:
		                        val1 = 0;
			        			val2 = 0;
		                        repetir_conta = 0;
		                    break;
		
		                    // CASO "1" - ADICIONAR VALOR INICIAL:
		                    case 1:
		                        printf("\n");
		                        textcolor(11);
		                        printf("	DIGITE O VALOR INICIAL PARA DIVIDIR: ");
		                        textcolor(10);
		                        scanf("%f" ,&val2 );
		                    break;
		                    
		                    // CASO "2" - ADICIONAR VALORES | [ DIVIDIR ]:
		                    case 2:
		                        printf("\n");
		                        textcolor(11);
		                        printf("	DIGITE O VALOR PARA DIVIDIR: ");
		                        textcolor(10);
		                        scanf("%f" ,&val1 );
		                        val2 = val2 / val1;
		                     break;
		
		                     // VALORES INVALIDOS:
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
			        
                break;
                    
                // CASO "5" - RAIZ QUADRADA:
                case 5:
                        
			        repetir_conta = 1;
			        val1 = 0;
			        val2 = 0;
			        
			        while( repetir_conta != 0 ) {
		            
		            	system("cls");
		                printf("\n\n");
		                textcolor(10);
		                printf("	MENU - RAIZ QUADRADA");
		                printf("\n\n");
		                textcolor(15);
		                printf("	0 - VOLTAR AO MENU PRINCIPAL. \n");
		                printf("	1 - ADICIONAR VALOR INICIAL. \n");
		                printf("	2 - CALCULAR RAIZ. \n");
		                textcolor(14);
		                printf("		| TOTAL DA RAIZ QUADRADA: %.2f", val2);
		                printf("\n\n");
		                textcolor(11);
		                printf("	DIGITE SUA RESPOSTA: ");
		                textcolor(10);
		                scanf("%d" ,&escolha_conta );
		
		                switch( escolha_conta ) {
		
		                    // CASO "0" - VOLTAR AO MENU PRINCIPAL:
		                    case 0:
		                        val1 = 0;
			        			val2 = 0;
		                        repetir_conta = 0;
		                    break;
		
		                    // CASO "1" - ADICIONAR VALOR INICIAL:
		                    case 1:
		                        printf("\n");
		                        textcolor(11);
		                        printf("	DIGITE O VALOR INICIAL PARA CALCULAR A RAIZ: ");
		                        textcolor(10);
		                        scanf("%f" ,&val2 );
		                    break;
		                    
		                    // CASO "2" - ADICIONAR VALORES | [ RAIZ QUADRADA ]:
		                    case 2:
		                        val2 = sqrt(val2);
		                     break;
		
		                     // VALORES INVALIDOS:
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
			        
                break;
                
                // CASO "6" - POTÊNCIAÇÃO:
                case 6:
                       
			        repetir_conta = 1;
			        val1 = 0;
			        val2 = 0;
			        
			        while( repetir_conta != 0 ) {
		            
		            	system("cls");
		                printf("\n\n");
		                textcolor(10);
		                printf("	MENU - POTENCIACAO");
		                printf("\n\n");
		                textcolor(15);
		                printf("	0 - VOLTAR AO MENU PRINCIPAL. \n");
		                printf("	1 - ADICIONAR VALOR INICIAL. \n");
		                printf("	2 - CALCULAR POTENCIA. \n");
		                textcolor(14);
		                printf("		| TOTAL DA POTENCIA: %.2f", val2);
		                printf("\n\n");
		                textcolor(11);
		                printf("	DIGITE SUA RESPOSTA: ");
		                textcolor(10);
		                scanf("%d" ,&escolha_conta );
		
		                switch( escolha_conta ) {
		
		                    // CASO "0" - VOLTAR AO MENU PRINCIPAL:
		                    case 0:
		                        val1 = 0;
			        			val2 = 0;
		                        repetir_conta = 0;
		                    break;
		
		                    // CASO "1" - ADICIONAR VALOR INICIAL:
		                    case 1:
		                        printf("\n");
		                        textcolor(11);
		                        printf("	DIGITE O VALOR INICIAL PARA CALCULAR A POTENCIA: ");
		                        textcolor(10);
		                        scanf("%f" ,&val2 );
		                    break;
		                    
		                    // CASO "2" - ADICIONAR VALORES | [ POTENCIACAO ]:
		                    case 2:
		                    	printf("\n");
		                    	textcolor(11);
		                        printf("	DIGITE O VALOR DO EXPOENTE: ");
		                        textcolor(10);
		                        scanf("%f" ,&val1 );
		                        val2 = pow(val2, val1);
		                     break;
		
		                     // VALORES INVALIDOS:
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
			        
                break;
                    
                // VALORES INVALIDOS:
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





