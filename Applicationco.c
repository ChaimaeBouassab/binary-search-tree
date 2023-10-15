#include <stdio.h>
#include <stdlib.h>

typedef struct noeud{
    int valeure;
   struct noeud*left;
   struct noeud*right;
}node;

node*creer_noeud(node*left,node*right,int a){

node*p=(node*)malloc(sizeof(node));
p->valeure=a;
p->left=left;
p->right=right;
return (p);
}

void ajouter_noeud(node*d,int b){
    if(d==NULL){
d=creer_noeud(NULL,NULL,b);
    }
    else if(d->valeure>b){
      ajouter_noeud(d->left,b);
    }
    else{
     ajouter_noeud(d->right,b);
    }
   
   
}
void display(node*d){
  if(d!=NULL){
    display(d->left);
    printf("%d\t",d->valeure);
    
    display(d->right);
    
}}
int main(){
    node* p=creer_noeud(NULL,NULL,10);
    node*d;
    ajouter_noeud(p,3);
    ajouter_noeud(p,5);
    ajouter_noeud(p,7);
    ajouter_noeud(p,12);
    ajouter_noeud(p,11);
    ajouter_noeud(p,30);
    printf("affichage\n");
    display(p);
    printf("end systeme");
    return 0;
}