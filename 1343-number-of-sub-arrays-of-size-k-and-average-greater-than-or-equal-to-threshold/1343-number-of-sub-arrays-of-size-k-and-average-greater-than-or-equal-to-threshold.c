int numOfSubarrays(int* arr, int n, int k, int target) {
    int window = 0;
    int sub_array = 0 ;
    for(int i = 0 ; i < k ; i++){
        window +=arr[i];
    }
    if(window >=target*k){
        sub_array = 1;
    }
    
     for(int i = k ; i < n ;i++){
        window += arr[i] - arr[i-k];
        if(window >=target*k){
            sub_array ++ ;
        }
     }
     return sub_array ;
}