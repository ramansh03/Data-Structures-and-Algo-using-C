int Bsearch(int arr[],int size,int key){
     int low,mid,high;
     low=0;
     high=size-1;
     while(low<=high){
        mid=(low+high)/2;
     if(arr[mid]==key){
        return mid+1;

     }
     if(key>arr[mid]){
        low=mid+1;
     }
     else{
        high=mid-1;
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
     int ans=Bsearch(arr,size,key);
     if(ans==-1)
        printf("Element not found");
     else
        printf("Element found at position %d",ans);
 }
