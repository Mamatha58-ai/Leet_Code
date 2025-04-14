/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n+1 ;
    int *re_arr = (int *)malloc((n+1)*sizeof(int));
    int k =0 , cnt ;
    for(int i = 0 ; i <= n ;i++){
       cnt  = 0 ;
     int  b = i ;
       while(b != 0){
        int r = b%2;
        if(r==1) cnt++;
        b = b/2 ;
       }
       re_arr[k++] = cnt;
    }
    return re_arr;
    }