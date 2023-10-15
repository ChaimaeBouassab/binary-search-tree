#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct dlinklist{
    int data;
    struct dlinklist *left;
    struct dlinklist *right;
};

typedef struct dlinklist node;
node *start=NULL;

// la 1 ere question 

node *getnode()
{
    node *nouveau;
    nouveau=(node*)malloc(sizeof(node));
    printf(" enter data : ");
    scanf("%d",&nouveau->data);
    nouveau->left=NULL;
    nouveau->right=NULL;
    return nouveau;
}

// la deuxieme question creer liste doublement chainee de n elements

void createlist(int n)
{
    int i;
    node *nouveau;
    node *courant;
    for(i=0;i<n;i++){
        nouveau= getnode();
        if(start==NULL)
        {
            start=nouveau;
        }
        else{
            courant=start;
            while( courant->right !=NULL)
                 courant=courant->right;
            courant->right=nouveau;
            nouveau->left=courant;

        }
    }
}

// la troisieme question inserer un noeud au milieu de la liste



void insert_middle(int nvdata,int position)
{
    node *nouveau=getnode();
    node *courant=start;
    printf("enter the position : ");
    scanf("%d",&position);
    if(nouveau==NULL)
    {
        exit(EXIT_FAILURE);

    }
    nouveau->data=nvdata;
    while(courant->data!=position)
    {
        courant=courant->right;
    }
    nouveau->left=courant;
    nouveau->right=courant->right;
    courant->right=nouveau;
    if(nouveau->right!=NULL)
    {
        nouveau->right->left=nouveau;
    }

}

//supprimer un noeud au milieu de la liste

void dll_delete_mid() {
    int i = 0, pos, nodectr; 
    node *temp; 
    if(start == NULL)
    {
    printf("\n Empty List"); 
    }
    else{
        printf("\n Enter the position : ");
            scanf("%d", &pos);
            nodectr = countnode(start);
            if(pos > nodectr) 
            {
                printf("node does not exist");
                return;

            }
            if(pos > 1 && pos < nodectr) 
            {
                temp = start;
                i=1;
                while (i<pos)
                {
                   temp=temp->right;
                   i++;
                }
                temp->right->left=temp->left;
                temp->left->right=temp->right;
                free(temp);
                printf("node is deleted");
            }
            else{
                printf("it is not the middle position");
            }
        }
}