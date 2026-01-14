void multiArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] *= 2;
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    multiArray(arr, 6);
    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}