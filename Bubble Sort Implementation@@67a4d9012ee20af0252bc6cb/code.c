// Your code here...
int bubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
    if(arr [j]>arr [j+1]){
        int temp= arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
}
}
}
void printArray(int arr[], int n){
    for (i=0;i<n;i++){
        printf("%d",arr[j+1]);
        printf("/n");
    }
}

