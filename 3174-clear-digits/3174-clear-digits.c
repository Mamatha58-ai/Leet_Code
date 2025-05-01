char* clearDigits(char* s) {
    int len = strlen(s), t = -1;
    char *a = (char *)malloc(len+1);
    for(int i = 0 ; i< len ; i++){
        if(isdigit(s[i])){
         if(t>=0) t--;
        } else{
         a[++t] = s[i];
        }
    }
   a[++t] = '\0';
    return a;
}