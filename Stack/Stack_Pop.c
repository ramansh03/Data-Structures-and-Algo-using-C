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
    }
}
/*******************************/
int pop(struct stack * ptr){

    if(isEmpty(ptr)){
        return -1;
    }
    else{

        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
/*******************************/
int main(){

struct stack * s=(struct stack *)malloc(sizeof(struct stack));
s->size=8;
s->top=-1;
s->arr=(int *)malloc(s->size*sizeof(int));


printf("Before Pushing, Full:%d\n",isFull(s));
printf("Before Pushing, Empty:%d\n",isEmpty(s));

push(s,23);
push(s,12);
push(s,19);
push(s,54);
push(s,12);


printf("\nSuccessfully popped %d from stack\n",pop(s));
printf("Successfully popped %d from stack\n",pop(s));
printf("Successfully popped %d from stack\n",pop(s));
printf("Successfully popped %d from stack\n",pop(s));
printf("Successfully popped %d from stack\n",pop(s));
printf("Successfully popped %d from stack",pop(s));

}
