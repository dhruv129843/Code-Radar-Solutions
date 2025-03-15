void selectionSort( char  arr[], int n){
 for(int i=0;i<n-1;i++){
 int min=i;
for(int j=i+1;j<n;j++){
    if (arr[j]<arr[min]){
     min=j;}
}
        if (min != i) {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;

 }
 }
 }
void printArray(char arr[], int n) {
    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", arr[ch]);
    }
    printf("\n"); // for a new line after printing the array
}

 


