#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

struct node* insert( struct node* root, int data ) {
		
	if(root == NULL) {
	
        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->data = data;

        node->left = NULL;
        node->right = NULL;
        return node;
	  
	} else {
      
		struct node* cur;
		
		if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
		} else {
            cur = insert(root->right, data);
            root->right = cur;
		}
	
		return root;
	}
}

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/
int countL=0;
int countR=0;
int getHeight(struct node* root) {
    // Write your code here
    if(root!=NULL){
        if(root->left!=NULL){
            countL++;
            getHeight(root->left);
        }
        if(root->right!=NULL){
            countR++;
            getHeight(root->right);
        }
    }
    if(countL>=countR){
    return countL;
    }
    else{
        return countR;
    }
}

