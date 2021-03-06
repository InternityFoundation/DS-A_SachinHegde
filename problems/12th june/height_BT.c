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
int getDepth(struct node* root){
    if(root==NULL){
        return 0;
    }
    else{
   int lh=getDepth(root->left);
   int rh=getDepth(root->right);
    if(lh>rh){
    return lh+1;
    }
    else{
        return rh+1;
    }
    }
}
int getHeight(struct node* root) {
    // Write your code here
    int ans=0;
    ans=getDepth(root);
    if(ans!=0){
    return ans-1;}
    else{
        return 0;
    }
}

