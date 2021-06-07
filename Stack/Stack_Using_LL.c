#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;

};
/*******************************/
void LLTraversal(struct Node * ptr){

    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
/*******************************/
int isEmpty(struct Node * top){
    if(top==NULL)
        return 1;
    return 0;
}
/*******************************/
int isFull(struct Node * top){
    struct Node * p=(struct Node *)malloc(sizeof(struct Node));
    if(p==NULL)
        return 1;
    return 0;
}
/*******************************/

struct Node * push(struct Node * top,int x){

    if(isFull(top))
        printf("Stack Overflow");
    else{

        struct Node * n=(struct node *)malloc(sizeof(struct Node));
        n->data=x;
        n->next=top;
        top=n;
        return top;

    }
};
/*******************************/

struct Node * pop(struct Node* top){
    if(isEmpty(top))
    {
        printf("Stack UnderFlow");
        exit(1);
    }

    else{
        struct Node * n=top;
        (top)=(top)->next;
        int x=n->data;
        printf("The element popped is %d\n",x);
        free(n);
        return top;

    }

};
/*******************************/
struct Node * peek(struct Node * top, int pos){
    struct Node * ptr=top;
    for(int i=0;(i<pos-1 && ptr!=NULL);i++){
        ptr=ptr->next;
    }

    if(ptr!=NULL)
        return ptr->data;
    return -1;
};
/*******************************/
struct Node * StackTop(struct Node * top){
    if(top!=NULL)
        return top->data;
    return -1;
};
/*******************************/
struct Node * StackBottom(struct Node * top){

    struct Node * ptr=top;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    return ptr->data;
};


int main(){

    struct Node * top=NULL;
    printf("The Original Stack\n");
    top=push(top,100);
    top=push(top,23);
    top=push(top,42);
    top=push(top,45);
    top=push(top,32);
    LLTraversal(top);
    printf("\n");
    printf("The stack after operation\n");
    for(int i=1;i<=5;i++){
        printf("the value at position %d is %d\n",i,peek(top,i));

}

printf("\nThe Top of Stack is %d\n",StackTop(top));

printf("\nThe Bottom of Stack is %d\n",StackBottom(top));

return 0;
}
