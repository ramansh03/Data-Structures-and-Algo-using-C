#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};



void LLTraversal(struct Node * head){
 struct Node * ptr=head;


   do {
    printf("Element %d\n",ptr->data);
    ptr=ptr->next;
    }while(ptr!=head);

}


struct Node * InsertBeg(struct Node * head,int data){

            struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
            ptr->data=data;

            struct Node * p=head->next;
            while(p->next!=head){
                p=p->next;
            }
            p->next=ptr;
            ptr->next=head;
            return ptr;
};

struct Node * InsertIndex(struct Node * head,int data,int index){

            struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
            ptr->data=data;
            struct Node * p=head;
            int i=0;
            while(i!=index-1){
                p=p->next;
                i++;
            }
            ptr->next=p->next;
            p->next=ptr;
            return head;

};

struct Node * InsertEnd(struct Node * head,int data){

            struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
            ptr->data=data;
            struct Node * p=head;
            int i=0;
            do{
                p=p->next;
                i++;
            }while(p->next!=head);

            p->next=ptr;
            ptr->next=head;
            return head;

};
struct Node * AfterNode(struct Node * head,struct Node * prevNode,int data){

            struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));

            ptr->data=data;

            ptr->next=prevNode->next;
            prevNode->next=ptr;

            return head;



};

int main(){

struct Node * head;
struct Node * second;
struct Node * third;
struct Node * fourth;


head=(struct Node *)malloc(sizeof(struct Node));
second=(struct Node *)malloc(sizeof(struct Node));
third=(struct Node *)malloc(sizeof(struct Node));
fourth=(struct Node *)malloc(sizeof(struct Node));

head->data=7;
head->next=second;

second->data=11;
second->next=third;

third->data=56;
third->next=fourth;

fourth->data=99;
fourth->next=head;

printf("The old Linked List:\n");
LLTraversal(head);

//head=InsertBeg(head,100);
//head=InsertIndex(head,200,2);
//head=InsertEnd(head,300);
head=AfterNode(head,third,57);
printf("The new Linked List:\n");
LLTraversal(head);
return 0;

}
