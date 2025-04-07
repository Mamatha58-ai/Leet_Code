char* greatestLetter(char* s) {
    int lower[26] = {0};
    int upper[26] = {0};
    for(int i=0;i<strlen(s) ;i++){
        char ch = s[i];
        if(islower(ch)){
            lower[ch-'a'] = 1 ;
        }
        else if(isupper(ch)){
            upper[ch-'A'] =1;
        }
    }
    char *Great = (char*)malloc(2*sizeof(char));
    Great[0] = '\0';
    for(int i=0;i<26;i++){
        if(upper[i] && lower[i]){
            Great[0] = i+'A';
            Great[1] = '\0';
        }
    }
   return Great;
}