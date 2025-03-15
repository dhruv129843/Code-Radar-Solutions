// Your code here...
void bubbleSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++)
        if(arr[j+1]<arr[j]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
 void printArray(char arr[], int n){
    for(char ch='a',ch<='z',ch++){
        printf(char arr[]);
        printf("\n";)
    }
 }