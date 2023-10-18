#include <stdio.h>  
#include <stdlib.h>
// Inclure la bibliothèque STanDard Input Output
                    // permet d'utiliser, entre autre, printf et scanf
int main()  // main désigne le programme principal
{   // Les accolades servent à délimiter les blocs
	int nb,i;
		printf("Entrez un nombre entier > 0 : "); 
	
	 // Afficher : "Entrer un nombre entier > 0"
	scanf("%d", &nb);   // Entrer : nb (le %d indique un nombre entier)
	
	//Pour i de 0 à nb par incréments de 2
	for(i=0;i<nb;i++)
{
		printf("%d ",i); 	// Afficher : "i "
}return 0;
	}
