// Your code here...
char bubbleSort( int n,char arr[n][100]){
    for(int i=0;i<n-1; i++){
    for(int j=0; j<n-1-i; j++){
        if(arr[j]>arr[j+1]){
            char *temp= arr[j];
            arr[j]= arr[j+1];
            arr[i+1]=temp;
        }
        void printArray(char arr[n][100],int n){
            for(int i=0;i<n;i++);
            printf("%c",arr[i]);
            printf("\n");
        }
    }
    }
}