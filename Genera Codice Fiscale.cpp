//Tempo impiegato: circa 3 ore. Da notare che non sono riuscito a fare gli ultimi 5 caratteri perchè non ho ripassato la lettura da file e le cifre dalla 12-15 dipendono dal comune e c'è un elenco infinito con il relativo codice del comune

/*
Il Codice Fiscale è costituito da 16 caratteri alfanumerici, indicativi dei dati anagrafici della persona fisica, composti nel seguente modo:
3 caratteri alfabetici per il cognome;
3 caratteri alfabetici per il nome;
2 caratteri numerici per l'anno di nascita;
1 carattere alfabetico per il mese di nascita;
2 caratteri numerici per il giorno di nascita ed il sesso;
4 caratteri associati al Comune oppure allo Stato estero di nascita.
1 carattere alfabetico usato come carattere di controllo


Qui di seguito vi documentiamo in modo sintetico le MODALITA' di CALCOLO per ogni campo indicato:


Nome: Sono necessari 3 caratteri e sono la 1a, la 3a e la 4a consonante, se il numero di consonanti è inferiore a 3 si aggiungo le vocali.

Cognome: Sono necessari 3 caratteri per rappresentare il cognome e sono la 1a, la 2a e la 3a consonante, se le consonanti sono meno di tre si aggiungono le vocali nell'ordine in cui compaiono nel cognome.

Anno: Per l'anno vengono prese semplicemente le ultime 2 cifre.

Mese: Per quanto riguarda il mese c'è una tabella di conversione in cui ad ogni mese viene associata una lettera dell'alfabeto, come riportato in seguito: (A = Gennaio) (B = Febbraio) (C = Marzo ...) D E H L M P R S ( T = Dicembre).

Giorno: Basta riportare il numero del giorno, con il particolare che per le persone di sesso femminile il numero deve essere incrementato di 40.

Comune di nascita: E' composto da 4 caratteri alfanumerici e viene rilevato dai volumi dei codici dei comuni italiani oppure da vari data base.

Il codice di controllo: E' composto da 1 carattere e serve a verificare la correttezza dei precedenti caratteri in fase di digitazione.
*/
#include <stdio.h>
#include <string.h>
#define a 17 
//(l'ultimo carattere è \0)
#define b 100
int main()
{
    char CF[a], N[b], C[b], S;
    int giorno, mese, anno;
    int j = 0;
    printf("Benvenuti nel generatore di codice fiscale, vi informo che genera soltanto fino all'unidicesima cifra, il motivo e' specificato come commento a inizio codice. \n");
    printf("Inserire nome: ");
    scanf(" %99[^\n]", N); // messo perchè scanf si interrompe se c'è uno spazio
    printf("Inserire cognome: ");
    scanf(" %99[^\n]", C); // messo perchè scanf si interrompe se c'è uno spazio
    printf("Inserire giorno di nascita: ");
    scanf("%d", &giorno);
    printf("Inserire mese di nascita: ");
    scanf("%d", &mese);
    printf("Inserire anno di nascita: ");
    scanf("%d", &anno);
    printf("Inserire sesso (M / m per maschio F / f per femmina): ");
    scanf(" %c", &S); // !! importante che ci sia lo spazio altrimenti nel buffer rimane \n del vettore e viene preso quello in S
    //da sistemare se ha lo spazio nel nome/cognome
    int lunN = strlen(N);
    int lunC = strlen(C);
    for(int i = 0; i<lunN; i++){ // ciclo per rimuovere spazi nomi
         if(N[i]==' '){
             for(int j = i; j < lunN; j++){
                 N[j]=N[j+1];
             }
         }
     }
    
    for(int i = 0; i<lunC; i++){ // ciclo per rimuovere spazi cognomi
         if(C[i]==' '){
             for(int j = i; j < lunC; j++){
                 C[j]=C[j+1];
             }
         }
     }
    
    lunN = strlen(N); //aggiornamento lunghezze senza spazi
    lunC = strlen(C);
    
    for(int i = 0; i<=lunC; i++){ //prime 3 lettere
        if(i==lunC){ //se le consonanti non bastano prendo le vocali in ordine
                for(int k = 0; k < lunC; k++){
                    if(j!=3 && (C[k]=='A' || C[k]=='a' || C[k]=='E' || C[k]=='e' || C[k]==73 || C[k]==73+32 || C[k]==79 || C[k]==79+32 || C[k]==85 || C[k]==85+32)){
                        CF[j]=C[k];
                        j++;
                    }
                }
    			for(j; j < 3; j++){
    				CF[j] = 'X';
				}
            break;
        }
        if((C[i]>=66 && C[i]<=90) || (C[i]>=98 && C[i]<=122)){ 
            if(C[i]!='E' && C[i]!='e' && C[i]!=73 && C[i]!=73+32 && C[i]!=79 && C[i]!=79+32 && C[i]!=85 && C[i]!=85+32){
                if(j==3){
                    break;
                }
                CF[j] = C[i];
                j++;
                }   
            }   
    }
    int contaconsonantiN=0; //perchè se ci sono 3 consonanti vanno messe quelle in ordine
    for(int i = 0; i < lunN; i++){
    	if((N[i]>=66 && N[i]<=90) || (N[i]>=98 && N[i]<=122)){ 
            if(N[i]!='E' && N[i]!='e' && N[i]!=73 && N[i]!=73+32 && N[i]!=79 && N[i]!=79+32 && N[i]!=85 && N[i]!=85+32){
            	contaconsonantiN++;
            }
        
        }
	}
	if(contaconsonantiN <= 3){
		for(int i = 0; i<=lunN; i++){
			if((N[i]>=66 && N[i]<=90) || (N[i]>=98 && N[i]<=122)){ 
            	if(N[i]!='E' && N[i]!='e' && N[i]!=73 && N[i]!=73+32 && N[i]!=79 && N[i]!=79+32 && N[i]!=85 && N[i]!=85+32){
                	CF[j] = N[i];
                    j++;
            	}
        	}
		}
	}
	if(contaconsonantiN>3){
		for(int i = 0; i<=lunN; i++){ //lettere 4-6
        	if(i==lunN){ //se le consonanti non bastano prendo le vocali in ordine
            	    for(int k = 0; j < 6; k++){
                	    if((N[k]=='A' || N[k]=='a' || N[k]=='E' || N[k]=='e' || N[k]==73 || N[k]==73+32 || N[k]==79 || N[k]==79+32 || N[k]==85 || N[k]==85+32)){
                    	    CF[j]=N[k];
                        	j++;
                    	}	
                	}	
            	break;
        	}
        	if((N[i]>=66 && N[i]<=90) || (N[i]>=98 && N[i]<=122)){ 
            	if(N[i]!='E' && N[i]!='e' && N[i]!=73 && N[i]!=73+32 && N[i]!=79 && N[i]!=79+32 && N[i]!=85 && N[i]!=85+32){
                	if(j==7){
                    	break;
                	}
                	if(j==5 || j==6) {
                    	CF[j-1]= N[i];
                    	j++;
                	}
                	if(j==4){
                    	j++;    
                	}
                	if(j==3){
                    	CF[j] = N[i];
                    	j++;
                	} 
            	}
        	}
   		}
	}
	if(j <= 5){
		for(int i = 0; i<=lunN; i++){
			if((N[i]>=65 && N[i]<=90) || (N[i]>=97 && N[i]<=122)){ 
            	if(N[i]=='A' || N[i]=='a' || N[i]=='E' || N[i]=='e' || N[i]==73 || N[i]==73+32 || N[i]==79 || N[i]==79+32 || N[i]==85 || N[i]==85+32){
                	CF[j] = N[i];
                    j++;
            	}
        	}
		}
	}
	for(j; j < 6; j++){
		CF[j]='X';
	}
    j=6; //reset di j che ho dovuto cambiare per escludere la seconda consonante
    CF[j] = ((anno % 100) / 10) + '0';
    j++;
    CF[j] = (anno % 10) + '0';
    j++;
    for(int i = 1; i <= 20; i++){
        if(i==mese){
            CF[j]=64+i;
            if(i==6){
                CF[j]='H';
                j++;
                break;
            }
            if(i==7){
                CF[j]='L';
                j++;
                break;
            }
            if(i==8){
                CF[j]='M';
                j++;
                break;
            }
            if(i==9){
                CF[j]='P';
                j++;
                break;
            }
            if(i==10){
                CF[j]='R';
                j++;
                break;
            }
            if(i==11){
                CF[j]='S';
                j++;
                break;
            }
            if(i==12){
                CF[j]='T';
                j++;
                break;
            }
            j++;
            break;
        }
    }
    if(S!='M' && S!='F' && S!='m' && S!= 'f'){
    	return 1;
	}
    if(S=='F'||S=='f'){
    	giorno=giorno+40;
	}
    CF[j]=giorno/10 + '0';
    j++;
    CF[j]= giorno%10 + '0';
    j++;
    int lunCF= strlen(CF);
    for(int i = 0; i < lunCF; i++){ // rende maiuscolo
        if(CF[i]>=97 && CF[i]<=122){
            CF[i]=CF[i]-32;
        }
    }
    printf("Il tuo codice fiscale parziale è: ");
    for(int i = 0; i < lunCF; i++){
        //if(C[i]<)
        printf("%c", CF[i]);
    }
    return 0;
}