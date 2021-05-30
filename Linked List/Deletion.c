
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

struct Node * DeleteBeg(struct Node * head){
  struct Node * ptr=head;
  head=head->next;
  free(ptr);
  return head;
};

struct Node * DeleteIndex(struct Node * head,int index){
  struct Node * p=head;
  struct Node * q=head->next;
  for(int i=0;i<index-1;i++){
    p=p->next;
    q=q->next;
  }
  p->next=q->next;
  free(q);
  return head;
};
struct Node * DeleteLast(struct Node * head){
  struct Node * p=head;
  struct Node * q=head->next;
  while(q->next!=NULL){
    p=p->next;
    q=q->next;
  }
  p->next=NULL;
  free(q);
  return head;
};

struct Node * DeleteAtKey(struct Node * head,int key){
  struct Node * p=head;
  struct Node * q=head->next;
  while(q->data!=key && q->next!=NULL){
    p=p->next;
    q=q->next;
  }
  if(q->data==key){
    p->next=q->next;
    free(q);
    return head;
  }
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

head=DeleteAtKey(head,55);
printf("The new Linked List:\n");
LLTraversal(head);


}
