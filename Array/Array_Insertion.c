#include<stdio.h>

void display(int arr[],int n){
//Traversal
for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);

}

void Insertion(int arr[],int size,int key,int capacity,int index){
//Insertion
if(size>=capacity){
    printf("Sorry!Overflow Condition occured");
}
    for(int i=size-1;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
    arr[index]=key;
    printf("A Great Success!!\n");
}


int main(){
    int arr[100]={7,8,12,7,28};
    int size=5,key=45,index=3;
    display(arr,size);
    Insertion(arr,size,key,100,index);
    size+=1;
    display(arr,size);

return 0;
}
