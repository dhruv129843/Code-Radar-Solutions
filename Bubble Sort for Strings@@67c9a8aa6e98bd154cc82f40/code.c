// Your code here...
void bubblSort(int n, char arr[][100]){
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n;j++){
        if(arr[j+1]<arr[j]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
void printArray( char[][100],int n){
    printf(" %s",char[][100]);
    printf("\n");

}