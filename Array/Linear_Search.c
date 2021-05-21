 #include<stdio.h>

 int lsearch(int arr[],int size, int key){

     for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i+1;
            }
        }
        return -1;
 }
 int main(){
     int size,arr[100],key;
     printf("Enter the size of the array:");
     scanf("%d",&size);
     printf("Enter the array:");
     for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
     }
     printf("Enter the key to be found:");
     scanf("%d",&key);
     int ans=lsearch(arr,size,key);
     printf("Element found at position %d",ans);
 }
