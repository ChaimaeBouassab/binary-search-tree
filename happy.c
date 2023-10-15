#include<stdio.h>
#include<stdlib.h>
typedef struct noeud {
int valeur;
struct noeud *gauche;
struct noeud *droit;
} *arbre;

typedef arbre abr;

abr creer_arbre(int val, abr gauche, abr droit){
abr arbre=(abr)malloc(sizeof(struct noeud));
arbre->valeur=val;
arbre->gauche=gauche;
arbre->droit=droit;
return arbre;
}

abr inserer_arbre(abr arbre , int  val){
if(arbre==NULL)
return creer_arbre(val, NULL, NULL);

else{
if(val<arbre->valeur)
arbre->gauche=inserer_arbre(arbre->gauche, val);
else
arbre->droit=inserer_arbre(arbre->droit, val);
  return arbre;
}
}

//Function to find max in a tree. 


int findMax(abr root)
{
    if (root == NULL)

        return 0 ;
    int res = root->valeur;

    int lres = findMax(root->gauche);

    int rres = findMax(root->droit);

    

    return res;
}

abr  Delete( abr root, int data)
 {  int a;
	if(root == NULL) 
    return root;
    
	else
         if(data < root->valeur)
          root->gauche = Delete(root->gauche,data);
	else
     if (data > root->valeur)
      root->droit = Delete(root->droit,data);
    
	// Wohoo... I found you, Get ready to be deleted	
	else 
		// Case 1:  No child
		if(root->gauche == NULL && root->droit == NULL) { 
			free(root);
			root = NULL;
		}
	
    
    
    else if(root->gauche == NULL) {
			 abr temp = root;
			root = root->droit;
			free (temp);
		}
    
		else if(root->droit == NULL) {
			 abr temp = root;
			root = root->gauche;
			free(temp);
		}
		// case 3: 2 children
		else { 
		a = findMax(root);
			root->valeur = a;
			root->droit = Delete(root->droit,root->valeur);
	}
 
	return root;
}

void afficher_arbre(abr arbre){
if(arbre!=NULL){
afficher_arbre(arbre->gauche);

printf("%d ***\t ",arbre->valeur);
afficher_arbre(arbre->droit);
}
}
int main()
{
    abr arbre;
arbre=creer_arbre(10, NULL, NULL);
arbre=inserer_arbre(arbre , 20);
arbre=inserer_arbre(arbre , 7);
arbre=inserer_arbre(arbre , 2);
arbre=inserer_arbre(arbre , 30);
arbre=inserer_arbre(arbre , 5);
arbre=inserer_arbre(arbre , 8);
printf(" L'affichage de l'arbre \n :");
printf("\n");
afficher_arbre(arbre);
printf("\n");
arbre = Delete(arbre,20);

afficher_arbre(arbre);
return 0;}
