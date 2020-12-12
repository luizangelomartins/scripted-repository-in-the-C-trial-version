

	// [" CRIADOR: LUIZ ÂNGELO MARTINS "]:

	/* 
	DESCRIÇÃO:
		PROJETO DE SISTEMA DE ESTACIONAMENTO QUE CONSISTE EM:
		
		- CALCULAR O TEMPO E O TOTAL A PAGAR PARA MOTOS,
		- CALCULAR O TEMPO E O TOTAL A PAGAR PARA CARROS.
		
	*/
	
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
	system("title PARKING SYSTEM");
	
	// DECLARAÇÃO DE VARIAVEIS:
    int repetir = 0;
    int escolha_usuario = 0;
    float aux1 = 0;
    float valor_hora = 0;
    float hora_inicial = 0;
    float hora_final = 0;
    float hora_resultado1 = 0;
    float hora_resultado2 = 0;
    
        while(repetir != 1) {
        
        repetir = 0;
	    escolha_usuario = 0;
	    aux1 = 0;
	    valor_hora = 0;
	    hora_inicial = 0;
	    hora_final = 0;
	    hora_resultado1 = 0;
	    hora_resultado2 = 0;
    
        	system("cls");
            printf("\n\n");
            textcolor(12);
            printf("	MENU GERAL - CALCULOS: \n\n");
            textcolor(15);
            printf("");
            printf("	0 - SAIR \n");
            printf("	1 - CARRO \n");
            printf("	2 - MOTO \n\n");
            printf("");
            textcolor(11);
            printf("	DIGITE SUA RESPOSTA: ");
            textcolor(10);
			scanf("%d" ,&escolha_usuario );
			
            switch( escolha_usuario ) {

                // CASO "0" - SAIR:
                case 0:
                    repetir = 1;
                break;

                // CASO "1" - CARRO:
                case 1:
                    
			        // ORIENTAÇÃO:
			        system("cls");
			        printf("\n\n\n");
			        textcolor(12);
			        printf("	CALCULO DO TEMPO - CARRO: \n");
			        textcolor(10);
			        printf("	OBS: SEPARE OS VALORES COM PONTO");
			        
			        // VALOR DA HORA:
			        printf("\n\n");
			        textcolor(11);
			        printf("	DIGITE O VALOR DA HORA: ");
			        textcolor(10);
			        scanf("%f" ,&valor_hora );
			        
			        // HORARIO DE ENTRADA:
			        textcolor(11);
			        printf("	DIGITE O HORARIO DE ENTRADA: ");
			        textcolor(10);
			        scanf("%f" ,&hora_inicial );
			        
			        // HORARIO DE SAÍDA:
			        textcolor(11);
			        printf("	DIGITE O HORARIO DE SAIDA: ");
			        textcolor(10);
			        scanf("%f" ,&hora_final );
			        
			        // CALCULO:
			        hora_resultado1 = hora_final - hora_inicial;
			        hora_resultado2 = hora_resultado1 * valor_hora;
			        aux1 = hora_resultado2;
			        
			        // EXIBIÇÃO:
			        printf("\n");
			        textcolor(10);
			        printf("	TOTAL DE HORAS: %.2f \n", hora_resultado1);
			        printf("	VALOR BRUTO: %.2f \n", aux1);
			        textcolor(14);
			        printf("	TOTAL A PAGAR: R$ %.2f", hora_resultado2);
			        printf("\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
					textcolor(15); 
					printf("        ");
					system("pause");
			           
                break;

                // CASO "2" - MOTO:
                case 2:
                    
			        // ORIENTAÇÃO:
			        system("cls");
			        printf("\n\n\n");
			        textcolor(12);
			        printf("	CALCULO DO TEMPO - MOTO: \n");
			        textcolor(10);
			        printf("	OBS: SEPARE OS VALORES COM PONTO");
			        
			        // VALOR DA HORA:
			        printf("\n\n");
			        textcolor(11);
			        printf("	DIGITE O VALOR DA HORA: ");
			        textcolor(10);
			        scanf("%f" ,&valor_hora );
			        
			        // HORARIO DE ENTRADA:
			        textcolor(11);
			        printf("	DIGITE O HORARIO DE ENTRADA: ");
			        textcolor(10);
			        scanf("%f" ,&hora_inicial );
			        
			        // HORARIO DE SAÍDA:
			        textcolor(11);
			        printf("	DIGITE O HORARIO DE SAIDA: ");
			        textcolor(10);
			        scanf("%f" ,&hora_final );
			        
			        // CALCULO:
			        hora_resultado1 = hora_final - hora_inicial;
			        hora_resultado2 = hora_resultado1 * valor_hora;
			        aux1 = hora_resultado2;
			        
			        // EXIBIÇÃO:
			        printf("\n");
			        textcolor(10);
			        printf("	TOTAL DE HORAS: %.2f \n", hora_resultado1);
			        printf("	VALOR BRUTO: %.2f \n", aux1);
			        textcolor(14);
			        printf("	TOTAL A PAGAR: R$ %.2f", hora_resultado2);
			        printf("\n\n");
					textcolor(15); 
					printf("        ");
					system("pause");
					textcolor(15); 
					printf("        ");
					system("pause");
			           
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





