// Your code here...
void bubbleSort(int n,char arr[n][100]){
    for(int i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++)
        if(arr[j+1]<arr[j]){
            char *temp=arr[j];
            arr[i]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
 void printArray(int n,char arr[n][100]){
    for(char ch='a';ch<='z';ch++){
        printf("%c ", arr[ch]);
    }
    printf("\n"); // for a new line after printing the array
}