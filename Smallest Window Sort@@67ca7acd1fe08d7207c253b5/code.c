// Your code here...
void findUnsortedSubarray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                printf("%d\n", &temp);
                

            }
        }

    }
}

printf("%d\n",findUnsortedSubarray(int arr[],int n));
    