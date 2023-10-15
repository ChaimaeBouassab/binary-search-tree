/* Deleting a node from Binary search tree */
#include<stdio.h>

typedef struct Node {
	int data;
	struct Node *left;
	struct Node *right;
} node;
//Function to find minimum in a tree. 
node* FindMin(node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

// Function to search a delete a value from tree.
struct node* Delete(struct node *root, int data) {
	if(root == NULL) return root;
    
	else
         if(data < root->data) root->left = Delete(root->left,data);
	else
     if (data > root->data) root->right = Delete(root->right,data);
    
	// Wohoo... I found you, Get ready to be deleted	
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			free(root);
			root = NULL;
		}
		
// Function to Insert Node in a Binary Search Tree
node* Insert(node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	                    5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);

	// Deleting node with value 5, change this value to test other cases
	root = Delete(root,5);

	
}
