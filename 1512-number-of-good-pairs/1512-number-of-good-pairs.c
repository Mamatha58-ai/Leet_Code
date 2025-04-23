int numIdenticalPairs(int* a, int n) {
    int good_pair = 0 ;
    for(int i=0 ; i<n-1 ; i++){
     for(int j=i+1 ; j<n ; j++){
      if(a[i]==a[j]){
        good_pair ++ ;
      }
     }
    }
    return good_pair ;
}