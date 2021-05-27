#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void LLTraversal(struct Node * ptr){
 while(ptr!=NULL)
    {
    printf("Element %d\n",ptr->data);
    ptr=ptr->next;
    }

}

//Case2
struct Node * InsertIndex(struct Node * head,int data,int index){

            struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
            struct Node * p=head;
            int i=0;
            while(i!=index-1){
                p=p->next;
                i++;
            }
            ptr->data=data;
            ptr->next=p->next;
            p->next=ptr;
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
fourth->next=NULL;

printf("The old Linked List:\n");
LLTraversal(head);
head=InsertIndex(head,100,2);
printf("The new Linked List:\n");
LLTraversal(head);


}
