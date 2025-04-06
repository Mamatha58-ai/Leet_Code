bool detectCapitalUse(char* w) {
    int c_cnt = 0 ;
    int len = strlen(w);
    for(int i=0;w[i]!='\0';i++){
       if(w[i] >='A' && w[i]<='Z'){
        c_cnt ++;
       }
    }
    
       if(c_cnt ==len || c_cnt ==0 ||(w[0] >='A' && w[0]<='Z' && c_cnt ==1) ){
        return true;
       }
       return false;
}