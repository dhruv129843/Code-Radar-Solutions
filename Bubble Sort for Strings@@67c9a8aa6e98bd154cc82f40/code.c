// Your code here...
#include  <string.h>
void bubbleSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++)
        if(arr[j+1]<arr[j]){
            char *temp=arr[j];
            strcpy(arr[j+1],arr[i]);
            strcpy(temp,arr[j+1]);
        }
    }
}
 void printArray(char arr[][100],int n){
    for(char ch='a';ch<='z';ch++){
        printf("%c ", arr[ch]);
    }
    printf("\n"); // for a new line after printing the array
}