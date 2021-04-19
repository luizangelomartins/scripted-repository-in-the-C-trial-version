


	// CRIADOR: LUIZ ÂNGELO MARTINS.
	
	/* 
	DESCRIÇÃO:
		PROJETO DE UM ANALISADOR DE CADEIAS AUTOMATO.
		- CALCULAR CADEIAS QUE CONTENHAM OS CARACTERES 'a' E 'b'.
	*/
	
	// COMPILADOR USADO:
		// DEV C++	
	
	
	
// INCLUSÃO-IMPORTAÇÃO DE BIBLIOTECAS:
#include <iostream>
#include <stdlib.h>
#include <conio.c>

// MÉTODO PRINCIPAL - "MAIN":
int main(int argc, char** argv) {
	
	// "PARAMETROS DE JANELA":
	system("mode 110 , 40");
	system("title ANALISE AUTOMATA");
	
	// DECLARAÇÃO DE VARIAVEIS:
	int c_contador_posicao = 0;
	int eof = 0;
	int r_repetir = 0;
	int e_escolha_user = 0;
	int t_contador = 0;
	int s_estado = 0;
	char c_cadeia[100];
	
	// ENTRADA DE DADOS:
	
	
	r_repetir = 0;
	while( r_repetir != 1) {
		
		// ENTRADA DE DADOS - MENU:
		// "MENU - EXIBIÇÃO":
		system("cls");
		printf("\n\n\n\n");
		textcolor(12);
		printf("\t ANALISE AUTOMATA: \n");
		printf("\t MENU GERAL: \n\n");
		textcolor(15);
		printf("\t 01 - ANALISAR CADEIA \n");
		textcolor(14);
		printf("\t 02 - SAIR");
		printf("\n\n");
		textcolor(11);
		printf("\t ENTRE COM SUA RESPOSTA: ");
		textcolor(10);
		scanf("%d", &e_escolha_user);
		
		switch(e_escolha_user) {
			
			// "CASE 1 (UM)" - "ANALISAR CADEIA":
			case 1:
				
				// "ZERANDO VARIAVEIS":
				eof = 0;
				s_estado = 0;
				t_contador = 0;
				c_contador_posicao = 0;
				
				// "ZERANDO VETOR - CADEIA DE CARACTERES":
				while( c_cadeia[c_contador_posicao] != '\0') { c_cadeia[c_contador_posicao] = '\0'; }
				
				// "CABEÇALHO":
				system("cls");
				printf("\n\n\n\n");
				textcolor(12);
				printf("\t ANALISE AUTOMATA \n");
				textcolor(14);
				printf("\t CARACTERES ACEITOS: ");
				textcolor(15);
				printf("[ a ]");
				textcolor(14);
				printf(" - ");
				textcolor(15);
				printf("[ b ]");
				printf("\n\n\n");
				textcolor(11);
				printf("\t ENTRE COM UMA CADEIA: ");
				textcolor(10);
				scanf("%s",c_cadeia);
				
				// CONTADOR DE ELEMENTOS DA CADEIA:
			    while( c_cadeia[eof] != '\0') { eof++; }
			    
			    // "CABEÇALHO":
			    textcolor(8);
			    printf("\t CADEIA DIGITADA PELO USUARIO: ");
			    textcolor(10);
			    printf("%s", c_cadeia);
			    textcolor(8);
			    printf(" - ");
			    textcolor(10);
			    printf("[ %d ]", eof);
			    textcolor(8);
			    printf(" ELEMENTOS");
			    printf("\n\n\n");
			    textcolor(10);
			    printf("\t DETALHES DA ANALISE: \n");
			    textcolor(15);
			    
				// ANALISANDO CADEIA:
				while(t_contador != (eof+1)) {
				
					// VERIFICADOR "EOF":
					if(t_contador == eof) { s_estado = 2; textcolor(8); printf("\n\n \t FINALIZACAO: ", s_estado); printf("estado - "); textcolor(10); printf("[ %d ]", s_estado); }
				
						switch(s_estado) {
								
							// "CASE 0" - "ESTADO 0 (ZERO)":
							case 0:
								if(c_cadeia[t_contador] == 'a' || c_cadeia[t_contador] == 'A') { t_contador++; textcolor(8); printf("\n \t elemento - "); textcolor(10); printf("[ %d ]", t_contador); textcolor(8); printf(" - "); textcolor(10); printf("[ %c ]", c_cadeia[t_contador-1]); textcolor(8); printf(" estado - "); textcolor(10); printf("[ %d ]", s_estado); textcolor(8); printf(" - "); textcolor(10); printf("ACEITO"); s_estado = 1; }
								if(c_cadeia[t_contador] == 'b' || c_cadeia[t_contador] == 'B') { t_contador++; textcolor(8); printf("\n \t elemento - "); textcolor(10); printf("[ %d ]", t_contador); textcolor(8); printf(" - "); textcolor(10); printf("[ %c ]", c_cadeia[t_contador-1]); textcolor(8); printf(" estado - "); textcolor(10); printf("[ %d ]", s_estado); textcolor(8); printf(" - "); textcolor(10); printf("ACEITO"); s_estado = 0; }
								else { textcolor(8); printf("\n\n \t SITUACAO FINAL: \n"); textcolor(8); printf("\t elemento - "); textcolor(10); printf("[ %d ]", t_contador+1); textcolor(8); printf(" - "); textcolor(10); printf("[ %c ]", c_cadeia[t_contador]); textcolor(8); printf(" estado - "); textcolor(10); printf("[ %d ]", s_estado); textcolor(8); printf(" - "); textcolor(12); printf("NAO ACEITO"); printf("\n\n"); textcolor(12); printf("\t ERRO / CADEIA INVALIDA! \n"); printf("\n\n"); textcolor(15); system("pause"); t_contador = eof+1; }
							break;
							
							// "CASE 1" - "ESTADO 1 (UM)":
							case 1:
								if(c_cadeia[t_contador] == 'b' || c_cadeia[t_contador] == 'B') { t_contador++; textcolor(8); printf("\n \t elemento - "); textcolor(10); printf("[ %d ]", t_contador); textcolor(8); printf(" - "); printf("[ %c ]", c_cadeia[t_contador-1]); textcolor(8); printf(" estado - "); textcolor(10); printf("[ %d ]", s_estado); textcolor(8); printf(" - "); textcolor(10); printf("ACEITO"); s_estado = 2; }
								else { textcolor(8); printf("\n\n \t SITUACAO FINAL: \n"); textcolor(8); printf("\t elemento - "); textcolor(10); printf("[ %d ]", t_contador+1); textcolor(8); printf(" - "); textcolor(10); printf("[ %c ]", c_cadeia[t_contador]); textcolor(8); printf(" estado - "); textcolor(10); printf("[ %d ]", s_estado); textcolor(8); printf(" - "); textcolor(12); printf("NAO ACEITO"); printf("\n\n"); textcolor(12); printf("\t ERRO / CADEIA INVALIDA! \n"); printf("\n\n"); textcolor(15); system("pause"); t_contador = eof+1; }
							break;
							
							// "CASE 2" - "ESTADO 2 (DOIS)" - "ENCERRAMENTO":
							case 2:
								textcolor(8);
								printf("\n \t SITUACAO FINAL: \n\n");
								if(t_contador == eof) { textcolor(10); printf("\t CADEIA ACEITA! \n"); printf("\n\n"); textcolor(15); system("pause"); t_contador++; }
								else { textcolor(12); printf("\t CADEIA INVALIDA! \n"); printf("\n\n"); textcolor(15); system("pause"); t_contador++; }
							break;
							
						}
						
				}
			break;
			
			// "CASE 2 (DOIS)" - "SAIR":
			case 2:
				r_repetir = 1;
			break;
			
			// "VALORES INVALIDOS":
			default:
				printf("\n\n");
				textcolor(12);
				printf("\t POR FAVOR DIGITE UM VALOR VALIDO. \n");
				printf("\t TENTE NOVAMENTE!");
				printf("\n\n\n");
				textcolor(15);
				system("pause");
			
		}
			
	}
	
	// "ESPERA FINAL":
	printf("\n\n");
	textcolor(13);
	printf("\t - OBRIGADO POR USAR ESTE PROGRAMA! \n");
	printf("\t - THANK YOU FOR USING THIS PROGRAM!");
	printf("\n\n\n");
	textcolor(15);
	system("pause");
	
	return 0;
	
}





