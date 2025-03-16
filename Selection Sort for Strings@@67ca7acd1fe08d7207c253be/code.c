// Your code here...
void selectionSort(char arr[][100], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int min=j;
                char *temp=arr[min];
                arr[j+1]=arr[j];
                arr[j]=min;
            }

            
        }
    }

}
void printArray(char arr[][100], int n){
    for(char ch='a';ch<='z';ch++){
        printf("%c",arr[][100]);
        printf("\n");

    }
}