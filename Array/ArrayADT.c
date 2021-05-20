#include<stdio.h>
#include<stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;

};

void createArray(struct  myArray *a, int tsize, int usize) {
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int *)malloc(tsize*sizeof(int));
}

void set(struct myArray *a) {
    int n;
    for(int i=0;i< a->used_size;i++){
        printf("Enter the element %d-",i+1);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}


void show(struct myArray *a)
{
    for(int i=0;i< a->used_size;i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}


int main(){

    struct myArray marks;
    int s1,s2;
    printf("Enter the total size-");
    scanf("%d",&s1);
    printf("Enter the used size-");
    scanf("%d",&s2);
    createArray(&marks,s1,s2);
    set(&marks);
    show(&marks);

    return 0;
}
