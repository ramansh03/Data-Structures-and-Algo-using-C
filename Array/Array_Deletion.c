#include<stdio.h>
void display(int arr[],int n){
//Traversal
for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);

}
void deletion(int arr[],int index,int size, int capacity){
//Deletion
for(int i=index;i<size-1;i++){
    arr[i]=arr[i+1];
}
}
int main(){

  int arr[100]={1,2,12,18,8};
  int index=1,capacity=100,size=5;
  deletion(arr,index,size,capacity);
  size-=1;
  display(arr,size);



}
