// Your code here...
void bubbleSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++)
        if (char strcmp(arr[j], arr[j + 1]) > 0) {
               char strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }

 sortStrings(arr, n);
 
    printf("Strings in sorted order are : ");
    for (int i = 0; i < n; i++)
        printf("\n String %d is %s", i + 1, arr[i]);
    return 0;