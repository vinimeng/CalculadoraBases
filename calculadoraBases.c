#include <stdio.h>
#include <stdlib.h>

int lerbintodec(int con, int aux, int aux2, int aux3, int numbin2[], int numdec, char numbin[]){
	int parada=0;
	while(parada==0){
	printf("\nNumero: ");
	scanf("%s", numbin);
	for(con=0;con<=8;con++){
		if(numbin[con]=='\0'){
			aux=con;
			con=10;
		}
	}
	aux3=8-aux;
	for(con=0;con<=7;con++){
		numbin2[con]=0;
	}
	for(con=0;con<=7;con++){
		if(numbin[con] == '\0') break;
		switch(numbin[con]){
			case '1':
				aux2=0;
				aux2=con+aux3;
				numbin2[aux2]=1;
				parada=1;
				break;
			case '0':
				aux2=0;
				aux2=con+aux3;
				numbin2[aux2]=0;
				parada=1;
				break;
			default:
				printf("\n\nEsse numero naum eh binario!\n\n");
				break;	
		}
	}
	}
	numdec=(numbin2[0]*(128))+(numbin2[1]*(64))+(numbin2[2]*(32))+(numbin2[3]*(16))+(numbin2[4]*(8))+(numbin2[5]*(4))+(numbin2[6]*(2))+(numbin2[7]*(1));
	return numdec;
}

int ma(int con, int aux, int aux2, int aux3, int numbin2[], int numdec, char numbin[], int dec1, int dec2, char base2, char numhex[], int numhex2[], int numoct2[], char numoct[]){
      int resultadd, parada=0;
      while(parada==0){
      printf("\nBase: ");
      scanf(" %c", &base2);
	switch(base2){
		case 'b':
			dec2=lerbintodec(con, aux, aux2, aux3, numbin2, numdec, numbin);
			parada=1;
			break;
		case 'B':
			dec2=lerbintodec(con, aux, aux2, aux3, numbin2, numdec, numbin);
			parada=1;
			break;
		case 'd':
			printf("\nNumero: ");
			scanf("%d", &numdec);
			dec2=numdec;
			parada=1;
			break;
		case 'D':
			printf("\nNumero: ");
			scanf("%d", &numdec);
			dec2=numdec;
			parada=1;
			break;
		case 'h':
			dec2=lerhextodec(con, aux, aux2, aux3, numhex2, numdec, numhex);
			parada=1;
			break;
		case 'H':
			dec2=lerhextodec(con, aux, aux2, aux3, numhex2, numdec, numhex);
			parada=1;
			break;
		case 'o':
			dec2=lerocttodec(con, aux, aux2, aux3, numoct2, numdec, numoct);
			parada=1;
			break;
		case 'O':
			dec2=lerocttodec(con, aux, aux2, aux3, numoct2, numdec, numoct);
			parada=1;
			break;
		default:
			printf("\nBase não aceita!");
			break;		
	}
	}
      resultadd=dec1+dec2;
      return resultadd;
}
int mi(int con, int aux, int aux2, int aux3, int numbin2[], int numdec, char numbin[], int dec1, int dec2, char base2, char numhex[], int numhex2[], int numoct2[], char numoct[]){
      int resultsub, parada=0;
      while(parada==0){
      printf("\nBase: ");
      scanf(" %c", &base2);
	switch(base2){
		case 'b':
			dec2=lerbintodec(con, aux, aux2, aux3, numbin2, numdec, numbin);
			parada=1;
			break;
		case 'B':
			dec2=lerbintodec(con, aux, aux2, aux3, numbin2, numdec, numbin);
			parada=1;
			break;
		case 'd':
			printf("\nNumero: ");
			scanf("%d", &numdec);
			dec2=numdec;
			parada=1;
			break;
		case 'D':
			printf("\nNumero: ");
			scanf("%d", &numdec);
			dec2=numdec;
			parada=1;
			break;
		case 'h':
			dec2=lerhextodec(con, aux, aux2, aux3, numhex2, numdec, numhex);
			parada=1;
			break;
		case 'H':
			dec2=lerhextodec(con, aux, aux2, aux3, numhex2, numdec, numhex);
			parada=1;
			break;
		case 'o':
			dec2=lerocttodec(con, aux, aux2, aux3, numoct2, numdec, numoct);
			parada=1;
			break;
		case 'O':
			dec2=lerocttodec(con, aux, aux2, aux3, numoct2, numdec, numoct);
			parada=1;
			break;
		default:
			printf("\nBase não aceita!");
			break;	
	}
	}
      resultsub=dec1-dec2;
      return resultsub;
}
int mu(int con, int aux, int aux2, int aux3, int numbin2[], int numdec, char numbin[], int dec1, int dec2, char base2, char numhex[], int numhex2[], int numoct2[], char numoct[]){
      int resultmult, parada=0;
      while(parada==0){
      printf("\nBase: ");
      scanf(" %c", &base2);
	switch(base2){
		case 'b':
			dec2=lerbintodec(con, aux, aux2, aux3, numbin2, numdec, numbin);
			parada=1;
			break;
		case 'B':
			dec2=lerbintodec(con, aux, aux2, aux3, numbin2, numdec, numbin);
			parada=1;
			break;
		case 'd':
			printf("\nNumero: ");
			scanf("%d", &numdec);
			dec2=numdec;
			parada=1;
			break;
		case 'D':
			printf("\nNumero: ");
			scanf("%d", &numdec);
			dec2=numdec;
			parada=1;
			break;
		case 'h':
			dec2=lerhextodec(con, aux, aux2, aux3, numhex2, numdec, numhex);
			parada=1;
			break;
		case 'H':
			dec2=lerhextodec(con, aux, aux2, aux3, numhex2, numdec, numhex);
			parada=1;
			break;
		case 'o':
			dec2=lerocttodec(con, aux, aux2, aux3, numoct2, numdec, numoct);
			parada=1;
			break;
		case 'O':
			dec2=lerocttodec(con, aux, aux2, aux3, numoct2, numdec, numoct);
			parada=1;
			break;
		default:
			printf("\nBase não aceita!");
			break;	
	}
	}
      resultmult=dec1*dec2;
      return resultmult;
}
int di(int con, int aux, int aux2, int aux3, int numbin2[], int numdec, char numbin[], int dec1, int dec2, char base2, char numhex[], int numhex2[], int numoct2[], char numoct[]){
      int resultdiv, parada=0;
      while(parada==0){
      printf("\nBase: ");
      scanf(" %c", &base2);
	switch(base2){
		case 'b':
			dec2=lerbintodec(con, aux, aux2, aux3, numbin2, numdec, numbin);
			parada=1;
			break;
		case 'B':
			dec2=lerbintodec(con, aux, aux2, aux3, numbin2, numdec, numbin);
			parada=1;
			break;
		case 'd':
			printf("\nNumero: ");
			scanf("%d", &numdec);
			dec2=numdec;
			parada=1;
			break;
		case 'D':
			printf("\nNumero: ");
			scanf("%d", &numdec);
			dec2=numdec;
			parada=1;
			break;
		case 'h':
			dec2=lerhextodec(con, aux, aux2, aux3, numhex2, numdec, numhex);
			parada=1;
			break;
		case 'H':
			dec2=lerhextodec(con, aux, aux2, aux3, numhex2, numdec, numhex);
			parada=1;
		case 'o':
			dec2=lerocttodec(con, aux, aux2, aux3, numoct2, numdec, numoct);
			parada=1;
			break;
		case 'O':
			dec2=lerocttodec(con, aux, aux2, aux3, numoct2, numdec, numoct);
			parada=1;
			break;
		default:
			printf("\nBase não aceita!");
			break;	
	}
	}
      resultdiv=dec1/dec2;
      return resultdiv;
}
int exponentation (int con, int aux, int aux2, int aux3, int numbin2[], int numdec, char numbin[], int dec1){
      int resultexp;
      resultexp=dec1*dec1;
      return resultexp;
}

void decbin(int resultd, int con, int numbin3[], int help){
	help=0;
    for(con=0; con<=8; con++){
    	numbin3[con]=0;
    }
	for (con=8; con>=0; con--){
        numbin3[con]=resultd%2;
        resultd=resultd/2;
    }
    printf("\nNumero Binario: ");
    for(con=0; con<=8; con++){
    	if(numbin3[con] != 0){
        	help=1;
        }
        if(help != 0){                                 
    		printf("%d", numbin3[con]);
    	}
	}
	if(numbin3[8]==0 && numbin3[7]==0 && numbin3[6]==0 && numbin3[5]==0 && numbin3[4]==0 && numbin3[3]==0 && numbin3[2]==0 && numbin3[1]==0 && numbin3[0]==0) printf("0");
    printf("\n\n");
}

int lerhextodec(int con, int aux, int aux2, int aux3, int numhex2[], int numdec, char numhex[]){
	int parada=0;
	while(parada==0){
	printf("\nNumero: ");
	scanf("%s", numhex);
	for(con=0;con<=2;con++){
		if(numhex[con]=='\0'){
			aux=con;
			con=10;
		}
	}
	aux3=2-aux;
	for(con=0;con<=2;con++){
		numhex2[con]=0;
	}
	for(con=0;con<=1;con++){
		switch(numhex[con]){
			case '1':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=1;
				parada=1;
				break;
			case '0':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=0;
				parada=1;
				break;
			case '2':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=2;
				parada=1;
				break;
   			case '3':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=3;
				parada=1;
    			break;
   			case '4':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=4;
				parada=1;
   				break;
    		case '5':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=5;
				parada=1;
   				break;
			case '6':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=6;
				parada=1;
    			break;
 			case '7':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=7;
				parada=1;
    			break;
    		case '8':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=8;
				parada=1;
    			break;
    		case '9':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=9;
				parada=1;
    			break;
    		case 'A':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=10;
				parada=1;
    			break;
    		case 'a':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=10;
				parada=1;
    			break;
    		case 'B':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=11;
				parada=1;
    			break;
    		case 'b':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=11;
				parada=1;
    			break;
    		case 'C':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=12;
				parada=1;
    			break;
    		case 'c':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=12;
				parada=1;
    			break;
    		case 'D':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=13;
				parada=1;
    			break;
    		case 'd':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=13;
				parada=1;
    			break;
    		case 'E':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=14;
				parada=1;
    			break;
    		case 'e':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=14;
				parada=1;
    			break;
    		case 'F':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=15;
				parada=1;
    			break;
    		case 'f':
				aux2=0;
				aux2=con+aux3;
				numhex2[aux2]=15;
				parada=1;
    			break;
			case '\0':
				break;
			default:
				printf("\n\nEsse numero naum eh hexadecimal!\n\n");
				break;	
		}
	}
	}
	numdec=(numhex2[0]*(16))+(numhex2[1]*(1));
	return numdec;
}

void dechex(int resultd, int con, int numhex2[], int help){
	help=0;
   	for(con=0; con<=2; con++){
    	numhex2[con]=0;
    }
	for (con=2; con>=0; con--){
        numhex2[con]=resultd%16;
        resultd=resultd/16;
    }
    printf("\nNumero Hexadecimal: ");
    for(con=0; con<=2; con++){
    	if(numhex2[con] != 0){
        	help=1;
        }
        if(help != 0){
			if(numhex2[con]>9){
			if(numhex2[con] == 10) printf("A"); 
			if(numhex2[con] == 11) printf("B");
			if(numhex2[con] == 12) printf("C");
			if(numhex2[con] == 13) printf("D");
			if(numhex2[con] == 14) printf("E");
			if(numhex2[con] == 15) printf("F");
     	} 
		else if(numhex2[con]<10){
			printf("%d", numhex2[con]);
		}
    	}    
	}
	if(numhex2[0]==0 && numhex2[1]==0 && numhex2[2]==0) printf("0");
    printf("\n\n");
}	

int lerocttodec(int con, int aux, int aux2, int aux3, int numoct2[], int numdec, char numoct[]){
	int parada=0;
	while(parada==0){
	printf("\nNumero: ");
	scanf("%s", numoct);
	for(con=0;con<=3;con++){
		if(numoct[con]=='\0'){
			aux=con;
			con=10;
		}
	}
	aux3=3-aux;
	for(con=0;con<=2;con++){
		numoct2[con]=0;
	}
	for(con=0;con<=2;con++){
		switch(numoct[con]){
			case '1':
				aux2=0;
				aux2=con+aux3;
				numoct2[aux2]=1;
				parada=1;
				break;
			case '0':
				aux2=0;
				aux2=con+aux3;
				numoct2[aux2]=0;
				parada=1;
				break;
			case '2':
				aux2=0;
				aux2=con+aux3;
				numoct2[aux2]=2;
				parada=1;
				break;
			case '3':
				aux2=0;
				aux2=con+aux3;
				numoct2[aux2]=3;
				parada=1;
				break;
			case '4':
				aux2=0;
				aux2=con+aux3;
				numoct2[aux2]=4;
				parada=1;
				break;
			case '5':
				aux2=0;
				aux2=con+aux3;
				numoct2[aux2]=5;
				parada=1;
				break;
			case '6':
				aux2=0;
				aux2=con+aux3;
				numoct2[aux2]=6;
				parada=1;
				break;
			case '7':
				aux2=0;
				aux2=con+aux3;
				numoct2[aux2]=7;
				parada=1;
				break;
			case '\0':
				break;
			default:
				printf("\n\nEsse numero naum eh binario!\n\n");
				break;	
		}
	}
	}
	numdec=(numoct2[0]*(64))+(numoct2[1]*(8))+(numoct2[2]*(1));
	return numdec;
}

void decoct(int resultd, int con, int numoct2[], int help){
	help=0;
   	for(con=0; con<=2; con++){
    	numoct2[con]=0;
    }
	for (con=2; con>=0; con--){
        numoct2[con]=resultd%8;
        resultd=resultd/8;
    }
    printf("\nNumero Octal: ");
    for(con=0; con<=2; con++){
    	if(numoct2[con] != 0){
        	help=1;
        }
        if(help != 0){
			printf("%d", numoct2[con]);
		}
	}
	if(numoct2[0]==0 && numoct2[1]==0 && numoct2[2]==0) printf("0");
	printf("\n\n");
}

int main(int argc, char *argv[]) {
	char base1, numbin[9], oper, base2, basefin, numhex[3], numoct[3], key;
	int con, aux, aux2, aux3, numbin2[7], numdec, dec1, dec2, resultd, help, numbin3[8],numhex2[2], numoct2[2], finalstop=0;
	while(finalstop==0){
	int stop=0, stop1=0, stop2=0, stopmor=0;
	while(stop==0){
	printf("\nBase: ");
	scanf(" %c", &base1);
	switch(base1){
		case 'b':
			dec1=lerbintodec(con, aux, aux2, aux3, numbin2, numdec, numbin);
			stop=1;
			break;
		case 'B':
			dec1=lerbintodec(con, aux, aux2, aux3, numbin2, numdec, numbin);
			stop=1;
			break;
		case 'd':
			printf("\nNumero: ");
			scanf("%d", &numdec);
			dec1=numdec;
			stop=1;
			break;
		case 'D':
			printf("\nNumero: ");
			scanf("%d", &numdec);
			dec1=numdec;
			stop=1;
			break;
		case 'h':
			dec1=lerhextodec(con, aux, aux2, aux3, numhex2, numdec, numhex);
			stop=1;
			break;
		case 'H':
			dec1=lerhextodec(con, aux, aux2, aux3, numhex2, numdec, numhex);
			stop=1;
			break;
		case 'o':
			dec1=lerocttodec(con, aux, aux2, aux3, numoct2, numdec, numoct);
			stop=1;
			break;
		case 'O':
			dec1=lerocttodec(con, aux, aux2, aux3, numoct2, numdec, numoct);
			stop=1;
			break;
		default:
			printf("\nBase naum aceita!");
			break;
	}
	}
	while(stop1==0){
	printf("\nOperacao: ");
	scanf(" %c", &oper);
	switch(oper){
		case '+':
			resultd=ma(con, aux, aux2, aux3, numbin2, numdec, numbin, dec1, dec2, base2, numhex, numhex2, numoct2, numoct);	
			stop1=1;			
        	break;
        case '-':
        	resultd=mi(con, aux, aux2, aux3, numbin2, numdec, numbin, dec1, dec2, base2, numhex, numhex2, numoct2, numoct);
        	stop1=1;
        	break;
        case '*':
        	printf("Operacao naum suportada!");
        	//resultd=mu(con, aux, aux2, aux3, numbin2, numdec, numbin, dec1, dec2, base2, numhex, numhex2, numoct2, numoct);
        	break;
        case '/':
        	printf("Operacao naum suportada!");
        	//resultd=di(con, aux, aux2, aux3, numbin2, numdec, numbin, dec1, dec2, base2, numhex, numhex2, numoct2, numoct);
        	break;
        case '!':
        	printf("Operacao naum suportada!");
        	//resultd=exponentation (con, aux, aux2, aux3, numbin2, numdec, numbin, dec1);
        	break;
        default: 
    		printf("\nEsta operacao eh invalida!");
    		break;
	}
	}
	while(stop2==0){
	printf("\nBase Resultado: ");
	scanf(" %c", &basefin);
	switch(basefin){
		case 'b':
			decbin(resultd, con, numbin3, help);
			stop2=1;
			break;
		case 'B':
			decbin(resultd, con, numbin3, help);
			stop2=1;
			break;
		case 'd':
			printf("\n\nNumero decimal: %d\n\n", resultd);
			stop2=1;
			break;
		case 'D':
			printf("\n\nNumero decimal: %d\n\n", resultd);
			stop2=1;
			break;
		case 'h':
			dechex(resultd, con, numhex2, help);
			stop2=1;
			break;
		case 'H':
			dechex(resultd, con, numhex2, help);
			stop2=1;
			break;
		case 'o':
			decoct(resultd, con, numoct2, help);
			stop2=1;
			break;
		case 'O':
			decoct(resultd, con, numoct2, help);
			stop2=1;
			break;
		default:
			printf("\nBase naum aceita!");
			break;
	}
	}
	while(stopmor==0)
    	{
    		printf("Quer continuar calculando? (s/n): ");
    		scanf(" %c", &key);
    		switch(key)
    		{
    			case 's':
    				finalstop=0;
    				stopmor=1;
    				break;
    			case 'S':
    				finalstop=0;
    				stopmor=1;
    				break;
    			case 'n':
    				finalstop=1;
    				stopmor=1;
    				break;
    			case 'N':
    				finalstop=1;
    				stopmor=1;
    				break;
    			default:
    				stopmor=0;
    				break;
    		}
    	}
    }
	system("PAUSE");
	return 0;
}
