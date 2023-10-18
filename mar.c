#include <stdio.h>  

// Inclure la bibliothèque STanDard Input Output
                    // permet d'utiliser, entre autre, printf et scanf
int main()  // main désigne le programme principal
{   // Les accolades servent à délimiter les blocs
//exemple 🤣😍 pour débuter haha !!!
	int nb; 
	
	printf("Entrez un nombre entier > 0 : ");  // Afficher : "Entrer un nombre entier > 0"
	scanf("%d", &nb);   // Entrer : nb (le %d indique un nombre entier)
	
	//Pour i de 0 à nb par incréments de 2
	for(int i = 0; i <= nb; i = i + 2)
{
		printf("%d ",i); 	// Afficher : "i "
	}
}