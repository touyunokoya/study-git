#include<stdio.h>
#include <stdlib.h>
struct node
{
    int item;
    struct node *next_right;
    struct node *next_left;
};

 struct node *create_node(int item,struct node *next_right,struct node *next_left){

 struct node *newnode = (struct node*)malloc(sizeof(struct node));
newnode ->item = item;
newnode ->next_left = next_left;
newnode ->next_right = next_right;
    return newnode;
}

void print_nodes(struct node *root){
    if(root != NULL){
printf("(%d,",root->item);
print_nodes(root -> next_left);
print_nodes(root -> next_right);
printf(")");
    // }else if(root ->next_left=NULL){
    //     printf("NULL,");
    // }else if(root->next_right=NULL){
    //     printf("NULL");
    }else{printf("NULL");}
}


int main () {
    struct node *root;

    root = create_node(3,NULL,NULL);
    root = create_node(8,root,NULL);
    root = create_node(7,create_node(5,NULL,NULL), root);

    print_nodes (root);
  }