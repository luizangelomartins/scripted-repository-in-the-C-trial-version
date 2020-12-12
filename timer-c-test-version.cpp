

	// [" CRIADOR: LUIZ 헞GELO MARTINS "]:

	/*
	DESCRI플O:
		PROJETO DE "TIMER/TEMPORIZADOR" QUE CONSISTE EM:
		
		- CRONOMETRAR,
		- TEMPORIZAR.
		
	*/


	// COMPILADOR USADO:
		// DEV C++	


// IMPORTA플O DE BIBLIOTECAS::
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.c>
#include <time.h>

// FUN플O PRINCIPAL - MAIN:
int main() {
	
	// "PARAMETROS DE JANELA":
	system("mode 90 , 50");
	system("title TIMER");
	
	// DECLARA플O DE VARIAVEIS:
    int repetir = 0;
    int repetir2 = 0;
    int repetir3 = 0;
    int escolha_usuario = 0;
    int escolha_usuario2 = 0;
    int escolha_usuario3 = 0;
    int aux1 = 0;
    int aux2 = 0;
    int tempo2 = 0;
    int tempo3 = 0;
    int tempo4 = 0;
    int tempo5 = 0;
    int tempo6 = 0;
    int tempo_aux1 = 0;
    int tempo_aux2 = 0;
    int tempo_aux3 = 0;
    
        while(repetir != 1) {
            
            // "ZERANDO VALORES":
            repetir = 0;
			escolha_usuario = 0;
			escolha_usuario2 = 0;
			escolha_usuario3 = 0;
			aux1 = 0;
			aux2 = 0;
			tempo2 = 0;
			tempo3 = 0;
			tempo4 = 0;
			tempo5 = 0;
			tempo6 = 0;
			repetir2 = 0;
    
            	// EXIBI플O DO MENU:
            	system("cls");
                printf("\n\n");
                textcolor(12);
                printf("	MENU - GERAL: \n\n");
                printf("");
                textcolor(15);
                printf("	0 - SAIR. \n");
                printf("	1 - CRONOMETRO. \n");
                printf("	2 - TEMPORIZADOR. \n");
                printf("\n");
                textcolor(11);
                printf("	DIGITE SUA RESPOSTA: ");
                textcolor(10);
                scanf("%d" ,&escolha_usuario );

                switch(escolha_usuario) {

                    // CASO "0" - SAIR:
                    case 0:
                        repetir = 1;
                    break;

                    // CASO "1" - CRONOMETRO:
                    case 1:
                       
        				repetir2 = 0;
        				while(repetir2 != 1) {
                
                			// EXIBI플O DO MENU DO CRONOMETRO:
                			system("cls");
			                printf("\n\n");
			                textcolor(12);
			                printf("	MENU - CRONOMETRO \n");
			                textcolor(10);
			                printf("	TEMPO LIMITE: 10 ( DEZ ) HORAS \n\n");
			                printf("");
			                textcolor(15);
			                printf("	0 - VOLTAR AO MENU PRINCIPAL. \n");
			                printf("	1 - INICIAR CONTAGEM. \n");
			                printf("	2 - ACERTAR O TEMPO. \n");
			                printf("\n");
			                textcolor(11);
			                printf("	DIGITE SUA RESPOSTA: ");
							textcolor(10);
                			scanf("%d" ,&escolha_usuario2 );
			
			                switch(escolha_usuario2) {
			
			                    // CASO "0" - SAIR:
			                    case 0:
			                        repetir2 = 1;
			                    break;
			
			                    // CASO "1" - INICIAR CONTAGEM:
			                    case 1:
			                    	
			                        printf("");
							        aux1 = 0;
							        aux2 = 1;
							        
							        while(aux2 != 3) {
							        	
							        	textcolor(14);
							        	system("cls");
							        	printf("\n\n\n");
							        	printf("	CONTAGEM: \n\n");
							        	textcolor(10);
							        	printf("	CRONOMETRO - [ %dh:%d%dm:%d%ds ]", tempo2, tempo3, tempo4, tempo5, tempo6);
								        tempo6++;
							
					                    // "SEGUNDOS":
					                    if (tempo6 > 9) { tempo6 = 0; tempo5++; }
					                    if (tempo5 > 5) { tempo5 = 0; tempo4++; }
					
					                    // "MINUTOS":
					                    if (tempo4 > 9) { tempo4 = 0; tempo3++; }
					                    if (tempo3 > 5) { tempo3 = 0; tempo2++; }
					
					                    // "HORAS":
					                    if (tempo2 > 9) { tempo6 = 0; tempo5 = 0; tempo4 = 0; tempo3 = 0; tempo2 = 0; }
					                    Sleep(1000);
							        	
									}
							        
			                    break;
			
			                    // CASO "2" - ACERTAR O TEMPO:
			                    case 2:
			                    	
							        textcolor(14);
						        	system("cls");
						        	printf("\n\n");
						        	printf("	DEFINIR TEMPO: \n\n");
        
							        // "SEGUNDOS":
							        while(tempo_aux1 != 1) {
							            
							            printf("\n");
							            textcolor(14);
							            printf("	SEGUNDOS: \n");
							            textcolor(11);
							            printf("	DIGITE OS SEGUNDOS PARTE 1 - ( 0 - 9 ): ");
							            textcolor(10);
							            scanf("%d" ,&tempo6 );
							            textcolor(11);
							            printf("	DIGITE OS SEGUNDOS PARTE 2 - ( 0 - 5 ): ");
							            textcolor(10);
							            scanf("%d" ,&tempo5 );
							           if ( tempo6 <= 9 && tempo5 <= 5 ) { tempo_aux1 = 1; }
							           
							    	}
							        
							        // "MINUTOS":
							        while(tempo_aux2 != 1) {
							            
							            printf("\n");
							            textcolor(14);
							            printf("	MINUTOS: \n");
							            textcolor(11);
							            printf("	DIGITE OS MINUTOS PARTE 1 - ( 0 - 9 ): ");
							            textcolor(10);
							            scanf("%d" ,&tempo4 );
							            textcolor(11);
							            printf("	DIGITE OS MINUTOS PARTE 2 - ( 0 - 5 ): ");
							            textcolor(10);
							            scanf("%d" ,&tempo3 );
							            if ( tempo4 <= 9 && tempo3 <= 5 ) { tempo_aux2 = 1; }
							            
							        }
							        
							        // "HORAS":
							        while(tempo_aux3 != 1) {
							            
							            printf("\n");
							            textcolor(14);
							            printf("	HORAS: \n");
							            textcolor(11);
							            printf("	DIGITE AS HORAS PARTE 1 - ( 0 - 9 ): ");
							            textcolor(10);
							            scanf("%d" ,&tempo2 );
							            if ( tempo2 <= 9 ) { tempo_aux3 = 1; }
							            
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
         
                    break;
                    
                    // CASO "2" - TEMPORIZADOR:
                    case 2:
                        
        				repetir3 = 0;
				        while(repetir3 != 1) {
				            
				            system("cls");
			                printf("\n\n");
			                textcolor(12);
			                printf("	MENU - TEMPORIZADOR \n");
			                textcolor(10);
			                printf("	TEMPO LIMITE: 10 ( DEZ ) HORAS \n\n");
			                printf("");
			                textcolor(15);
			                printf("	0 - VOLTAR AO MENU PRINCIPAL. \n");
			                printf("	1 - ACERTAR O TEMPO E INICIAR CONTAGEM. \n\n");
			                printf("");
			                textcolor(11);
			                printf("	DIGITE SUA RESPOSTA: ");
			                textcolor(10);
							scanf("%d" ,&escolha_usuario3 );
			
			                switch(escolha_usuario3) {
			
			                    // CASO "0" - SAIR:
			                    case 0:
			                        repetir3 = 1;
			                    break;
			
			                    // CASO "1" - ACERTAR O TEMPO E INICIAR CONTAGEM:
			                    case 1:
			                        
							        textcolor(14);
						        	system("cls");
						        	printf("\n\n");
						        	printf("	DEFINIR TEMPO: \n\n");
        
							        // "SEGUNDOS":
							        while(tempo_aux1 != 1) {
							            
							            printf("\n");
							            textcolor(14);
							            printf("	SEGUNDOS: \n");
							            textcolor(11);
							            printf("	DIGITE OS SEGUNDOS PARTE 1 - ( 0 - 9 ): ");
							            textcolor(10);
							            scanf("%d" ,&tempo6 );
							            textcolor(11);
							            printf("	DIGITE OS SEGUNDOS PARTE 2 - ( 0 - 5 ): ");
							            textcolor(10);
							            scanf("%d" ,&tempo5 );
							           if ( tempo6 <= 9 && tempo5 <= 5 ) { tempo_aux1 = 1; }
							           
							    	}
							        
							        // "MINUTOS":
							        while(tempo_aux2 != 1) {
							            
							            printf("\n");
							            textcolor(14);
							            printf("	MINUTOS: \n");
							            textcolor(11);
							            printf("	DIGITE OS MINUTOS PARTE 1 - ( 0 - 9 ): ");
							            textcolor(10);
							            scanf("%d" ,&tempo4 );
							            textcolor(11);
							            printf("	DIGITE OS MINUTOS PARTE 2 - ( 0 - 5 ): ");
							            textcolor(10);
							            scanf("%d" ,&tempo3 );
							            if ( tempo4 <= 9 && tempo3 <= 5 ) { tempo_aux2 = 1; }
							            
							        }
							        
							        // "HORAS":
							        while(tempo_aux3 != 1) {
							            
							            printf("\n");
							            textcolor(14);
							            printf("	HORAS: \n");
							            textcolor(11);
							            printf("	DIGITE AS HORAS PARTE 1 - ( 0 - 9 ): ");
							            textcolor(10);
							            scanf("%d" ,&tempo2 );
							            if ( tempo2 <= 9 ) { tempo_aux3 = 1; }
							            
							        }
							
			                        printf("");
							        aux1 = 0;
							        aux2 = 1;
							        
							        while(aux2 != 3) {
							        	
							        	textcolor(14);
							        	system("cls");
							        	printf("\n\n\n");
							        	printf("	CONTAGEM: \n\n");
							        	textcolor(10);
							        	printf("	TEMPORIZADOR - [ %dh:%d%dm:%d%ds ]", tempo2, tempo3, tempo4, tempo5, tempo6);
								        tempo6--;

					                    // "SEGUNDOS":
					                    if (tempo6 < 0) { tempo6 = 9; tempo5--; }
					                    if (tempo5 < 0) { tempo5 = 5; tempo4--; }
					
					                    // "MINUTOS":
					                    if (tempo4 < 0) { tempo4 = 9; tempo3--; }
					                    if (tempo3 < 0) { tempo3 = 5; tempo2--; }
					
					                    // "HORAS":
					                    if (tempo2 == 0 && tempo3 == 0 && tempo4 == 0 && tempo5 == 0 && tempo6 == 0) {  
					                    
					                        tempo2 = 1;
					                        tempo3 = 0;
					                        tempo4 = 0;
					                        tempo5 = 5;
					                        tempo6 = 9;
					                        
					                    }
					                    
					                    Sleep(1000);
							        	
									}
							       
			                    break;
			
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





