

	// [" CRIADOR: LUIZ ÂNGELO MARTINS "]:

	/*
	DESCRIÇÃO:
		PROJETO DE CALCULOS QUE CONSISTE EM:
		
		- CALCULO DE MMC,
		- SOMAR FRAÇÃO,
		- SUBTRAIR FRAÇÃO,
		- MULTIPLICAR FRAÇÃO,
		- DIVIDIR FRAÇÃO,
		- CALCULO DE IMC,
		- CONVERTER CELSIUS PARA KELVIN,
		- CELSIUS PARA FAHRENHEIT,
		- KELVIN PARA CELSIUS,
		- KELVIN PARA FAHRENHEIT,
		- FAHRENHEIT PARA CELSIUS,
		- FAHRENHEIT PARA KELVIN.

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
	system("mode 120 , 40");
	system("title CALCULADORA TESTE");
        
    // DECLARAÇÃO DE VARIAVEIS E OBJETOS:
    int escolha_usuario = 1;
    int denominador1;
    int denominador2;
    int resultado;
    int a;
    int b;
    int denominador_soma = 0;
    int numerador1_soma = 0;
    int numerador2_soma = 0;
    int numerador2;
    int result1;
    int result2;
    int denominador1_multiplicar = 0;
    int denominador2_multiplicar = 0;
    int numerador1_multiplicar = 0;
    int numerador2_multiplicar = 0;
    int numerador;
    int denominador;
    int result;
    int denominador1_dividir = 0;
    int denominador2_dividir = 0;
    int numerador1_dividir = 0;
    int numerador2_dividir = 0;
        
        
        // "FILTRAGEM DE ESCOLHAS":
        while ( escolha_usuario != 0 ) {
            
            // "ZERANDO VALORES":
            denominador1_dividir = 0;
    		denominador2_dividir = 0;
		    numerador1_dividir = 0;
		    numerador2_dividir = 0;
            escolha_usuario = 1;
		    denominador1;
		    denominador2;
		    resultado;
		    a;
		    b;
		    denominador_soma = 0;
		    numerador1_soma = 0;
		    numerador2_soma = 0;
		    numerador2;
		    result1;
		    result2;
		    denominador1_multiplicar = 0;
		    denominador2_multiplicar = 0;
		    numerador1_multiplicar = 0;
		    numerador2_multiplicar = 0;
		    numerador;
		    denominador;
		    result;
            
            // MENU:
            system("cls");
            printf("\n\n");
            textcolor(12);
            printf("	MENU GERAL - CALCULADORA \n\n");
            textcolor(14);
            printf("	0 = SAIR. \n");
            textcolor(15);
            printf("	1 = CALCULO DE MMC. \n");
            printf("	2 = SOMAR FRACAO. \n");
            printf("	3 = SUBTRAIR FRACAO. \n");
            printf("	4 = MULTIPLICAR FRACAO. \n");
            printf("	5 = DIVIDIR FRACAO. \n");
            printf("	6 = CALCULO DE IMC. \n");
            printf("	7 = CONVERTER CELSIUS PARA KELVIN. \n");
            printf("	8 = CONVERTER CELSIUS PARA FAHRENHEIT. \n");
            printf("	9 = CONVERTER KELVIN PARA CELSIUS. \n");
            printf("	10 = CONVERTER KELVIN PARA FAHRENHEIT. \n");
            printf("	11 = CONVERTER FAHRENHEIT PARA CELSIUS. \n");
            printf("	12 = CONVERTER FAHRENHEIT PARA KELVIN. \n\n");
            printf("");
            textcolor(11);
            printf("	DIGITE SUA ESCOLHA: ");
            textcolor(10);
            scanf("%d" ,&escolha_usuario );
            
        switch ( escolha_usuario ) {
        
            // BLOCO QUE SE TRATA DO ENCERRAMENTO DO PROGRAMA:
            case 0:
            	textcolor(13);
            	system("cls");
            	printf("\n\n\n");
                printf("	VOCE SAIU!");
                printf("\n\n\n");
                escolha_usuario = 0;
            break;
                
            // BLOCO QUE SE TRATA DO MMC:
            case 1:
            	system("cls");
            	printf("\n\n");
            	textcolor(12);
            	printf("	CALCULO DE MMC. \n\n");
            	textcolor(11);
                printf("	Digite o primeiro MMC: "); 
                textcolor(10);
                scanf("%d" ,&denominador1 );
                textcolor(11);
                printf("	Digite o segundo MMC: "); 
                textcolor(10);
                scanf("%d" ,&denominador2 );
            
		        a = denominador1;
		        b = denominador2;
		        
		        while ( b != 0 ) {
		        
		            int r = a % b;
		            a = b;
		            b = r;
		            
		        }
		        
		        resultado = denominador1 * (denominador2 / a );
		        textcolor(14);
		        printf("\n\n");
                printf("	O MMC DE %d E %d E: %d", denominador1, denominador2, resultado);
                printf("\n\n\n");
				textcolor(15); 
				printf("        ");
				system("pause");
            break;
            
            // BLOCO QUE SE TRATA DA SOMA DE FRAÇÕES:
            case 2:
                while ( denominador_soma == 0 ) {
                    system("cls");
	            	printf("\n\n");
	            	textcolor(12);
	            	printf("	SOMA DE FRACOES. \n\n");
	            	textcolor(11); 
	                printf("	Digite o denominador: "); 
	                textcolor(10); 
	                scanf("%d" ,&denominador_soma );
	                textcolor(11); 
	                printf("	Digite o primeiro numerador: "); 
	                textcolor(10); 
	                scanf("%d" ,&numerador1_soma );
	                textcolor(11); 
	                printf("	Digite o segundo numerador: "); 
	                textcolor(10); 
	                scanf("%d" ,&numerador2_soma );
	                
	                    if ( denominador_soma == 0 ) { 
						
							textcolor(14); 
							printf("\n\n");
							printf("	O DENOMINADOR NAO PODE SER ZERO!"); 
							printf("\n\n\n");
							textcolor(15); 
							printf("        ");
							system("pause");
							
						}
	                
                }
		        
		        result1 = numerador1_soma + numerador2_soma;
		        result2 = result1 / denominador_soma;
		        printf("\n\n");
		        textcolor(10); 
                printf("	SUA FRACAO: %d / %d \n", numerador1_soma + numerador2_soma, denominador_soma);
                textcolor(14); 
                printf("	A APROXIMACAO DEU: %d", result2);
                printf("\n\n\n");
				textcolor(15); 
				printf("        ");
				system("pause");
            break;
                    
            // BLOCO QUE SE TRATA DA SUBTRAÇÃO DE FRAÇÕES:
            case 3:
                while ( denominador_soma == 0 ) {
                    system("cls");
	            	printf("\n\n");
	            	textcolor(12);
	            	printf("	SUBTRACAO DE FRACOES. \n\n");
	            	textcolor(11); 
	                printf("	Digite o denominador: "); 
	                textcolor(10); 
	                scanf("%d" ,&denominador_soma );
	                textcolor(11); 
	                printf("	Digite o primeiro numerador: "); 
	                textcolor(10); 
	                scanf("%d" ,&numerador1_soma );
	                textcolor(11); 
	                printf("	Digite o segundo numerador: "); 
	                textcolor(10); 
	                scanf("%d" ,&numerador2_soma );
	                
	                    if ( denominador_soma == 0 ) { 
						
							textcolor(14); 
							printf("\n\n");
							printf("	O DENOMINADOR NAO PODE SER ZERO!"); 
							printf("\n\n\n");
							textcolor(15); 
							printf("        ");
							system("pause");
							
						}
	                
                }
		        
		        result1 = numerador1_soma - numerador2_soma;
		        result2 = result1 / denominador_soma;
		        printf("\n\n");
		        textcolor(10); 
                printf("	SUA FRACAO: %d / %d \n", numerador1_soma - numerador2_soma, denominador_soma);
                textcolor(14); 
                printf("	A APROXIMACAO DEU: %d", result2);
                printf("\n\n\n");
				textcolor(15); 
				printf("        ");
				system("pause");
            break;        
                    
            // BLOCO QUE SE TRATA DA MULTIPLICAÇÃO DE FRAÇÕES:        
            case 4:
                while ( denominador1_multiplicar == 0 || denominador1_multiplicar == 1 || 
                        denominador2_multiplicar == 0 || denominador2_multiplicar == 1 ) {
        
        		system("cls");
            	printf("\n\n");
            	textcolor(12);
            	printf("	MULTIPLICACAO DE FRACOES. \n\n");
    
    			textcolor(11);
                printf("	Digite o primeiro denominador: "); 
                textcolor(10);
                scanf("%d" ,&denominador1_multiplicar );
                textcolor(11);
                printf("	Digite o segundo denominador: "); 
                textcolor(10);
                scanf("%d" ,&denominador2_multiplicar );
                
                textcolor(11);
                printf("	Digite o primeiro numerador: "); 
                textcolor(10);
                scanf("%d" ,&numerador1_multiplicar );
                textcolor(11);
                printf("	Digite o segundo numerador: "); 
                textcolor(10);
                scanf("%d" ,&numerador2_multiplicar );
                
                    if ( denominador1_multiplicar == 0 ) { textcolor(14); printf("\n\n"); printf("	DENOMINADOR 1 - NAO HA SUPORTE PARA ESTE DENOMINADOR!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                    if ( denominador2_multiplicar == 0 ) { textcolor(14); printf("\n\n"); printf("	DENOMINADOR 2 - NAO HA SUPORTE PARA ESTE DENOMINADOR!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                    if ( denominador1_multiplicar == 1 ) { textcolor(14); printf("\n\n"); printf("	DENOMINADOR 1 - NAO HA SUPORTE PARA ESTE DENOMINADOR!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                    if ( denominador2_multiplicar == 1 ) { textcolor(14); printf("\n\n"); printf("	DENOMINADOR 2 - NAO HA SUPORTE PARA ESTE DENOMINADOR!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                    
                } 
        
		        numerador = numerador1_multiplicar * numerador2_multiplicar;
		        denominador = denominador1_multiplicar * denominador2_multiplicar;
		        result = numerador / denominador;

        		textcolor(10);
        		printf("\n\n");
                printf("	SUA FRACAO: %d / %d \n", numerador1_multiplicar * numerador2_multiplicar, denominador1_multiplicar * denominador2_multiplicar);
                textcolor(14);
                printf("	A APROXIMACAO DEU: %d", result);
                
				printf("\n\n\n");
				textcolor(15); 
				printf("        ");
				system("pause");
            break;
            
            // BLOCO QUE SE TRATA DA DIVISÃO DE FRAÇÕES:    
            case 5:
                while ( denominador1_dividir == 0 || denominador2_dividir == 0 ) {
                	
	        		system("cls");
	            	printf("\n\n");
	            	textcolor(12);
	            	printf("	DIVISAO DE FRACOES. \n\n");
	            	
	            	textcolor(11);
	                printf("	Digite o primeiro numerador: "); 
	                textcolor(10);
	                scanf("%d" ,&numerador1_dividir );
	                textcolor(11);
	                printf("	Digite o segundo numerador: "); 
	                textcolor(10);
	                scanf("%d" ,&numerador2_dividir );
	                
	                textcolor(11);
	                printf("	Digite o primeiro denominador: "); 
	                textcolor(10);
	                scanf("%d" ,&denominador1_dividir );
	                textcolor(11);
	                printf("	Digite o segundo denominador: "); 
	                textcolor(10);
	                scanf("%d" ,&denominador2_dividir );
                    
                    if ( denominador1_dividir == 0 ) { textcolor(14); printf("\n\n"); printf("	DENOMINADOR 1 - NAO HA SUPORTE PARA ESTE DENOMINADOR!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                    if ( denominador2_dividir == 0 ) { textcolor(14); printf("\n\n"); printf("	DENOMINADOR 2 - NAO HA SUPORTE PARA ESTE DENOMINADOR!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                    
                } 
        
		        numerador = numerador1_dividir * denominador2_dividir;
		        denominador = denominador1_dividir * numerador2_dividir;
		        result = numerador / denominador;

        		textcolor(10);
        		printf("\n\n");
                printf("	SUA FRACAO: %d / %d \n", numerador1_dividir * denominador2_dividir, denominador1_dividir * numerador2_dividir);
                textcolor(14);
                printf("	A APROXIMACAO DEU: %d", result);
                
                printf("\n\n\n");
				textcolor(15); 
				printf("        ");
				system("pause");
            break;
            
            // BLOCO QUE TRATA SOBRE O IMC:
            case 6:
                
                float peso;
                float altura;
                float result;
                float resultado_imc;
                
                system("cls");
            	printf("\n\n");
            	textcolor(12);
            	printf("	IMC. \n\n");
	            	
	            textcolor(11);	
                printf("	Digite o valor do peso corporal: "); 
                textcolor(10);
                scanf("%f" ,&peso );
                textcolor(11);
                printf("	Digite o valor da altura: "); 
                textcolor(10);
                scanf("%f" ,&altura );
                
        		resultado = peso / ( altura * altura );
        		result = resultado;
        		
        		textcolor(10);
        		printf("\n\n");
        		printf("	IMC = %.2f \n", result);
                
                if ( result < 18 ) { textcolor(14); printf("	A PESSOA ESTA ABAIXO DO PESO!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                if ( result > 18 && result < 25 ) { textcolor(14); printf("	A PESSOA ESTA COM O PESO NORMAL!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                if ( result > 25 && result < 30 ) { textcolor(14); printf("	A PESSOA ESTA COM SOBRE PESO!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                if ( result > 30 && result < 35 ) { textcolor(14); printf("	A PESSOA ESTA COM OBESIDADE GRAU I!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                if ( result > 35 && result < 40 ) { textcolor(14); printf("	A PESSOA ESTA COM OBESIDADE GRAU II!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                if ( result > 40 ) { textcolor(14); printf("	A PESSOA ESTA COM OBESIDADE GRAU III!"); printf("\n\n\n"); textcolor(15); printf("        "); system("pause"); }
                
            break;
            
            // MÉTODO PARA O CÁLCULO DE TEMPERATURA:
            // CELSIUS PARA KELVIN:
            case 7:
                
                float celcius;
                float kelvin;
		        
		        system("cls");
            	printf("\n\n");
            	textcolor(12);
            	printf("	CELSIUS PARA KELVIN. \n\n");
                
                textcolor(11);
                printf("	Digite o valor da temperatura em celsius: "); 
                textcolor(10);
                scanf("%f" ,&celcius );
                
		        kelvin = celcius + 273.15;
		        textcolor(14);
		        printf("\n\n");
                printf("	A TEMPERATURA DE %.2f GRAUS CELSIUS E IGUAL A %.2f KELVIN", celcius, kelvin);
                
                printf("\n\n\n");
				textcolor(15); 
				printf("        ");
				system("pause");
				
            break;
            
            // MÉTODO PARA O CÁLCULO DE TEMPERATURA:
            // CELSIUS PARA FAHRENHEIT:
            case 8:
                
                float celsius_Fahrenheit;
                float Fahrenheit;
                
                system("cls");
            	printf("\n\n");
            	textcolor(12);
            	printf("	CELSIUS PARA FAHRENHEIT. \n\n");
                
                textcolor(11);
                printf("	Digite o valor da temperatura em celsius: "); 
                textcolor(10);
                scanf("%f" ,&celsius_Fahrenheit );
                
		        Fahrenheit = ( celsius_Fahrenheit * 9/5 ) + 32;
		        textcolor(14);
		        printf("\n\n");
                printf("	A TEMPERATURA DE %.2f GRAUS CELSIUS E IGUAL A %.2f FAHRENHEIT", celsius_Fahrenheit, Fahrenheit);
                
                printf("\n\n\n");
				textcolor(15); 
				printf("        ");
				system("pause");
				
            break;
            
            // MÉTODO PARA O CÁLCULO DE TEMPERATURA:
            // KELVIN PARA CELSIUS:
            case 9:
                
                float kelvin_Celcius;
                float celcius_kelvin;
                
                system("cls");
            	printf("\n\n");
            	textcolor(12);
            	printf("	KELVIN PARA CELSIUS. \n\n");
            	
            	textcolor(11);
                printf("	Digite o valor da temperatura em kelvin: "); 
                textcolor(10);
                scanf("%f" ,&kelvin_Celcius );
                
		        celcius_kelvin = kelvin_Celcius - 273.15;
		        textcolor(14);
		        printf("\n\n");
                printf("	A TEMPERATURA DE %.2f KELVIN E IGUAL A %.2f CELCIUS", kelvin_Celcius, celcius_kelvin);
                
                printf("\n\n\n");
				textcolor(15); 
				printf("        ");
				system("pause");
                
            break;
            
            // MÉTODO PARA O CÁLCULO DE TEMPERATURA:
            // KELVIN PARA FAHRENHEIT:
            case 10:
                
                float kelvin_Fahrenheit;
                float Fahrenheit_from_kelvin;
                
                system("cls");
            	printf("\n\n");
            	textcolor(12);
            	printf("	KELVIN PARA FAHRENHEIT. \n\n");
            	
                textcolor(11);
                printf("	Digite o valor da temperatura em kelvin: "); 
                textcolor(10);
                scanf("%f" ,&kelvin_Fahrenheit );
                
		        Fahrenheit_from_kelvin = ( kelvin_Fahrenheit - 273.15 ) * 9/5 + 32;
                printf("\n\n");
                textcolor(14);
                printf("	A TEMPERATURA DE %.2f KELVIN E IGUAL A %.2f FAHRENHEIT", kelvin_Fahrenheit, Fahrenheit_from_kelvin);
                
                printf("\n\n\n");
				textcolor(15); 
				printf("        ");
				system("pause");
				
            break;
            
            // MÉTODO PARA O CÁLCULO DE TEMPERATURA:
            // FAHRENHEIT PARA CELSIUS:
            case 11:
                
                float fahrenheit_Celcius;
                float Celcius_from_Fahrenheit;
                
                system("cls");
            	printf("\n\n");
            	textcolor(12);
            	printf("	FAHRENHEIT PARA CELSIUS. \n\n");
            	
                textcolor(11);
                printf("	Digite o valor da temperatura em fahrenheit: "); 
                textcolor(10);
                scanf("%f" ,&fahrenheit_Celcius );
                
		        Celcius_from_Fahrenheit = ( fahrenheit_Celcius - 32 ) * 5/9;
		        textcolor(14);
		        printf("\n\n");
                printf("	A TEMPERATURA DE %.2f FAHRENHEIT E IGUAL A %.2f CELSIUS", fahrenheit_Celcius, Celcius_from_Fahrenheit);
                
                printf("\n\n\n");
				textcolor(15); 
				printf("        ");
				system("pause");
				
            break;
            
            // MÉTODO PARA O CÁLCULO DE TEMPERATURA:
            // FAHRENHEIT PARA KELVIN:
            case 12:
                
                float fahrenheit_Kelvin;
                float Kelvin_from_Fahrenheit;
                
                system("cls");
            	printf("\n\n");
            	textcolor(12);
            	printf("	FAHRENHEIT PARA KELVIN. \n\n");
            	
                textcolor(11);
                printf("	Digite o valor da temperatura em fahrenheit: "); 
                textcolor(10);
                scanf("%f" ,&fahrenheit_Kelvin );
                
                Kelvin_from_Fahrenheit = ( fahrenheit_Kelvin - 32 ) * 5/9 + 273.15;
                printf("\n\n");
            	textcolor(14);
                printf("	A TEMPERATURA DE %.2f FAHRENHEIT E IGUAL A %.2f KELVIN", fahrenheit_Kelvin, Kelvin_from_Fahrenheit);
                
                printf("\n\n\n");
				textcolor(15); 
				printf("        ");
				system("pause");
				
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





