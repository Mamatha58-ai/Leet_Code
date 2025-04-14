int fib(int n){
    int first = 0 ,second = 1,third ;
    for( int i =1 ; i<=n ;i++){
        third = first +second ;
        first = second ;
        second =third;
    } 
    return first ;
}