/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
 
struct Node
{
    int data;
    char *path;
    struct Node *left;
    struct Node *right;
};
 
struct Node *createNode(int data)
{
    struct Node *temp = malloc(sizeof(struct Node));
    temp->left = temp->right = NULL;
    temp->data = data;
 
    return temp;
}
 
char *concatenate(char *a, char *b)
{
    char *path = malloc(strlen(a) + strlen(b) + 1);
    strcpy(path, a);
    strcat(path, b);
 
    return path;
}
 
int main()
{
    int i;
    int N, Q;
    int index, child;
    char state;
    struct Node *head, *head1;
 
    struct Node *ar[1001];
 
    scanf("%d %d", &N, &Q);
 
    head = createNode(1);
    head->path = "";
    ar[1] = head;
 
    while(--N) {
 
        scanf("%d %d %c", &index, &child, &state);
 
        struct Node *temp = ar[index];
 
        switch(state) {
 
            case 'L':
                temp->left = createNode(child);
                ar[child] = temp->left;
                temp->left->path = concatenate(temp->path, "L");
 
                break;
 
            case 'R':
                temp->right = createNode(child);
                ar[child] = temp->right;
                temp->right->path = concatenate(temp->path, "R");
 
                break;
        }
    }
 
    while(Q--) {
 
        scanf("%d", &child);
        char *path = ar[child]->path;
        struct Node *temp = head;
        bool present = true;
 
        for(i = 0; path[i] && temp; i++) {
 
            if(path[i] == 'R') {
                temp = temp->left;
            }
            else {
                temp = temp->right;
            }
 
            if(temp == NULL) {
                printf("-1\n");
                present = false;
                break;
            }
 
        }
 
        if(present) {
            printf("%d\n", temp->data);
        }
    }
 
    return 0;
}