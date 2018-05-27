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
	
	void chiedinumerodomande(int*, int*);
	chiedinumerodomande(&ndm, &ndf);
	
	
	

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