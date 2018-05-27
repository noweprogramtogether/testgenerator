#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	
	FILE* pfdm; //puntatore al file delle domande di matematica
	FILE* pfdf; //puntatore al file delle domande di fisica
	FILE* pfrm; //puntatore al file delle risposte di matematica
	FILE* pfrf; //puntatore al file delle risposte di fisica
	
	pfdm = fopen("listadomandematematica.txt","r");  //apro in lettura il file contenente le domande di matematica
	pfdf = fopen("listadomandefisica.txt","r");      //apro in lettura il file contenente le domande di fisica
	pfrm = fopen("listarispostematematica.txt","r"); //apro in lettura il file contenente le risposte di matematica
	pfrf = fopen("istarispostefisica.txt","r");      //apro in lettura il file contenente le risposte di fisica
	
	
	
	
	int ndm; //numero di domande di matematica
	int ndf; //numero di domande di fisica
	
	
	void chiedinumerodomande(int*, int*);  //prototipo funzione per richiedere all'utente il numero di domande
	chiedinumerodomande(&ndm, &ndf);       //richiamo la funzione che richiede all'utente il numero di domande
	
	
	
	
	
	
	//dichiaro gli array che utilizzerò per la memorizzazione dei dati letti dai file
	{	
	char tuttedomandemate[10][100];  //array che contiene tutte le domande di matematica
	char tuttedomandefis[10][100];   //array che contiene tutte le domande di fisica
	
	char domandemate_scelte[ndm][100];  //array che contiene un numero scelto di domande di matematica
	char domandefis_scelte[ndf][100];   //array che contiene un numero scelto di domande di fisica
	
	
	char tutterispostemate[10][100];  //array che contiene tutte le risposte di matematica
	char tutterispostefis[10][100];   //array che contiene tutte le risposte di fisica
	
	char rispostemate_scelte[ndm][100];  //array che contiene un numero scelto di risposte di matematica
	char rispostefis_scelte[ndf][100];   //array che contiene un numero scelto di risposte di fisica
	}
	
	
	 
	 
	 void leggifile(char dmate[][], char dfis[][]), char rmat[][], char rfis[][]);         //prototipo funzione che legge i dati dai file
	 leggifile(tuttedomandemate, tuttedomandefis, tutterispostemate, tutterispostefis);    //leggo i dati dai file di testo
	 
	 

	return 0;
}




void chiedinumerodomande(numeromate, numerofis)  //FUNZIONE CHE CHIEDE IL NUMERO DI DOMANDE DA SOMMINISTRARE ALL'UTENTE PER OGNI MATERIA
{
	printf("\n Inserisci il numero di domande di matematica:");       //chiedo all'utente quante domande somministrare di matematica
	scanf("%d", numeromate);                                          //leggo il numero di domande di matematica da somministrare all'utente
	printf("\n Inserisci il numero di domande di matematica:");       //chiedo all'utente quante domande somministrare di fisica
	scanf("%d", numerofis);                                           //leggo il numero di domande di fisica da somministrare all'utente
	
	return;
}




void leggifile(dmate[][], dfis[][]), rmat[][], rfis[][]) //FUNZIONE CHE LEGGE I FILE E MEMORIZZA IL LORO INTERO CONTENUTO NEI RISPETTIVI ARRAY ISTANZIATI NEL PROGRAMMA
{
	int i;
	for(i=0; i<10; i++)
	{
	   fgets(char dmate[i], 100, FILE pfdm);  //leggo le domande di matematica mediante il puntatore al file che contiene la lista medesima
       fgets(char dfis[i], 100, FILE pfdf);   //leggo le domande di fisica mediante il puntatore al file che contiene la lista medesima
       fgets(char rmat[i], 100, FILE pfrm);   //leggo le risposte di matematica mediante il puntatore al file che contiene la lista medesima
       fgets(char rfis[i], 100, FILE pfrf);	  //leggo le risposte di fisica mediante il puntatore al file che contiene la lista medesima	
	}
	
}





