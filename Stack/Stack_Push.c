#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
/*******************************/
int isEmpty(struct stack * ptr){
if(ptr->top== -1)
    return 1;
else
    return 0;
}
/*******************************/
int isFull(struct stack * ptr){
if(ptr->top==ptr->size-1)
    return 1;
else
    return 0;
}
/*******************************/
void push(struct stack * ptr,int val){

    if(isFull(ptr)){
        printf("Cant push the value %d, will lead to stack overflow!!",val);
    }
    else{

        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("\nThe value %d has been pushed successfully\n",val);
    }
}
/*******************************/
int main(){

struct stack * s=(struct stack *)malloc(sizeof(struct stack));
s->size=8;
s->top=-1;
s->arr=(int *)malloc(s->size*sizeof(int));
int val;
printf("Enter the value to be pushed:");
scanf("%d",&val);

printf("\nBefore Pushing, Full:%d\n",isFull(s));
printf("Before Pushing, Empty:%d\n",isEmpty(s));

push(s,val);

printf("\nAfter Pushing, Full:%d\n",isFull(s));
printf("After Pushing, Empty:%d",isEmpty(s));


}
