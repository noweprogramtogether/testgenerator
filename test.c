#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int ndm; //numero di domande di matematica
	int ndf; //numero di domande di fisica
	
	void chiedinumerodomande(int*, int*);
	
	
	

	return 0;
}




void chiedinumerodomande()  //FUNZIONE CHE CHIEDE IL NUMERO DI DOMANDE DA SOMMINISTRARE ALL'UTENTE PER OGNI MATERIA
{
	printf("\n Inserisci il numero di domande di matematica:"); //chiedo all'utente quante domande somministrare di matematica
	scanf("%d", numeromate);                                          //leggo il numero di domande di matematica da somministrare all'utente
	printf("\n Inserisci il numero di domande di matematica:"); //chiedo all'utente quante domande somministrare di fisica
	scanf("%d", numerofis);                                          //leggo il numero di domande di fisica da somministrare all'utente
	
	return;
}