#include <stdio.h>
#include<stdlib.h>
typedef int Ttype; 
typedef struct Abnoeud{
 Ttype val;
 struct Abnoeud *filsg;
 struct Abnoeud *filsd; 
} Abnoeud;
typedef struct AbArbreRepere{
 Abnoeud *racine;
}AbArbre; 

Abnoeud *CreerFeuille(Ttype val){
 Abnoeud *Fe;
 Fe = (Abnoeud*)malloc(sizeof(Abnoeud));
 Fe->val=val;
 Fe ->filsg=NULL;
 Fe ->filsd=NULL;
 return(Fe);
}
Abnoeud *CreerNoeud(Ttype val, Abnoeud *filsg, Abnoeud *filsd){
 Abnoeud *No;
 No =(Abnoeud*)malloc(sizeof(Abnoeud));
 No->val=val;
 No->filsg=filsg;
 No->filsd=filsd;
 return(No);
}

AbArbre *CreerAbArbre(){
 AbArbre *Ar;
 Ar=(AbArbre*)malloc(sizeof(AbArbre));
 Ar -> racine=NULL;
 return(Ar);}


 Void AjouterNoeud(Abnoeud *racine, Ttype val){
 if(racine == NULL){ 
 racine = CreerNoeud(val, NULL, NULL);
}
 else{
 if(val <racine->val){
 AjouterNoeud(racine->filsg, val); 
 }
 else{
 AjouterNoeud(racine->filsd, val);
 }
 }
}
int main()
{
    Abnoeud *F,*g,*h;
 
F=CreerFeuille(2);

g=CreerNoeud(2, NULL, NULL);
h= CreerAbArbre();
  AjouterNoeud(10, 2);
}