int sumArray(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int result = sumArray(arr, 6);
    printf("Sum of all array elements = %d.\n", result);
    return 0;
}