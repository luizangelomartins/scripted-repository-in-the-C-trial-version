

	// [" CRIADOR: LUIZ ÂNGELO MARTINS "]:

	// DESCRIÇÃO:
		//PROGRAMA SIMPLES PARA GERAR NÚMEROS ALEATÓRIOS.

	// COMPILADOR USADO:
		// DEV C++	


// IMPORTAÇÃO DE BIBLIOTECAS::
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.c>
#include <time.h>

// FUNÇÃO PRINCIPAL - MAIN:
int main() {
	
	// "PARAMETROS DE JANELA":
	system("mode 90 , 50");
	system("title GERADOR DE NUMEROS ALEATORIOS");
	
	// DECLARAÇÃO DE VARIAVEIS E OBJETOS:
    int aux1 = 0;
    int valor1 = 0;
    int valor2 = 0;
    int escolha = 0;
    int repetir = 1;
    int aux0 = 0;
    int repetidor1 = 0;
    int repetidor2 = 0;
    clock_t Tempo_de_Execucao;
    
        while ( repetir != 0 ) {
        
		// "ZERANDO VALORES":   
        aux1 = 0;
	    valor1 = 0;
	    valor2 = 0;
	    escolha = 0;
	    repetir = 1;
	    repetidor1 = 0;
    	repetidor2 = 0;
            
        // EXIBIÇÃO/CONSTRUÇÃO DO MENU:
        system("cls");
        aux1 = 0;
        printf("\n\n\n");
        textcolor(12);
        printf("	GERADOR DE NUMEROS ALEATORIOS:\n");
        textcolor(15);
        printf("\n");
        printf("	0 - SAIR.\n");
        printf("	1 - GERAR NUMERO(S) ALEATORIO(S).\n");
        printf("\n");
        textcolor(11);
        printf("	DIGITE SUA RESPOSTA: ");
        textcolor(10);
        scanf("%d" ,&escolha );
        
            // "FILTRAGEM DA ESCOLHA DO USUARIO":
            switch ( escolha ) {
                
                // CASO "0" - SAIR:
                case 0:
                    repetir = escolha;
                break;
                    
                // CASO "1" - GERAR NÚMERO(S) ALEATÓRIO(S):
                case 1:
                    
                    while(aux1 != 1) {
                        
                        system("cls");
                        textcolor(12);
                        printf("\n\n	ENTRADA DE DADOS:");
                        textcolor(11);
                        printf("\n\n	DESEJA GERAR QUANTOS NUMEROS ?: 0 - 9: ");
                        textcolor(10);
                        scanf("%d" ,&valor1 );
                        textcolor(11);
                        printf("	DESEJA GERAR NUMEROS ENTRE QUAL INTERVALO ?: 0 - ");
                        textcolor(10);
                        scanf("%d" ,&valor2 );
                        textcolor(11);
                        
                        int vetor_numero[valor1];
						
                            if ( valor1 <= 9 ) { 
							
								aux1 = 1;
								Tempo_de_Execucao = clock ();
										srand(time(NULL));
							
						        printf("\n");
						        
						            // GERANDO O VETOR:
						            while( repetidor1 != valor1 ) {
						                
						                vetor_numero[repetidor1] = rand() % valor2;
						                repetidor1++;
						                
						            }
						            
						            // ORDENANDO O VETOR:
						            for ( int aux1 = 0; aux1 < valor1; aux1++ ) {
						                
						                for ( int aux2 = 0; aux2 < valor1; aux2++) {
						                    
						                    if ( vetor_numero[aux1] < vetor_numero[aux2] ) {
						                        
						                        aux0 = vetor_numero[aux1];
						                        vetor_numero[aux1] = vetor_numero[aux2];
						                        vetor_numero[aux2] = aux0;
						                        
						                    }
						                    
						                }
						                
						            }
						            
						            textcolor(13); 
						            printf("	QUANTIA - %d", valor1);
                        			printf("\n	INTERVALO - %d", valor2);
                        			printf("\n");	
                        				
						            // EXIBINDO OS VALORES:
						            while( repetidor2 != valor1 ) {
						                
						                printf("\n");
						                textcolor(11); 
						                printf("	ALEATORIO [ %d ] - ", ( repetidor2 + 1 ) );
						                textcolor(10); 
						                printf("%d", vetor_numero[repetidor2] );
						                repetidor2++;
						                
						            }
						        
						        textcolor(10); 
						        printf("\n\n	NUMEROS GERADOS COM SUCESSO!");
								printf("\n\n");
								textcolor(15); 
								printf("        ");
								system("pause");
								
							} else { 
							
								printf("\n");
								textcolor(14); 
								printf("	POR FAVOR DIGITE UM VALOR VALIDO!"); 
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
                    printf("	POR FAVOR DIGITE UM VALOR VALIDO!");
                    printf("\n");
                    printf(" 	TENTE NOVAMENTE!");
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





