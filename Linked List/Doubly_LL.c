#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * prev;
    struct Node * next;
};

void LLTraversal(struct Node * ptr){
 while(ptr!=NULL)
    {
    printf("Element %d\n",ptr->data);
    ptr=ptr->next;
    }

}

int main(){

struct Node * n1=(struct Node *)malloc(sizeof(struct Node));
struct Node * n2=(struct Node *)malloc(sizeof(struct Node));
struct Node * n3=(struct Node *)malloc(sizeof(struct Node));

n1->data=1;
n1->next=n2;
n1->prev=NULL;

n2->data=2;
n2->next=n3;
n2->prev=n1;

n3->data=3;
n3->next=NULL;
n3->prev=n2;

LLTraversal(n1);

}
