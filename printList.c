#include<stdio.h>
#include<stdlib.h>


struct list
{
    int item;
    struct list *next;
};


void printlist(struct list *cell){
    if(cell==NULL){
    }else{
printf("item::%d\n",cell->item);
printlist(cell->next);
    }
}

int main(){
struct list *pc1,*pc2,*pc3;

pc1 = malloc(sizeof(struct list));
pc2 = malloc(sizeof(struct list));
pc3 = malloc(sizeof(struct list));

pc1->item=1;
pc1->next=pc2;
pc2->item=2;
pc2->next=pc3;
pc3->item=3;
pc3->next=NULL;

printlist(pc1);
}