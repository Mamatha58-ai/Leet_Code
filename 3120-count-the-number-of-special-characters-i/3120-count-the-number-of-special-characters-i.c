int numberOfSpecialChars(char* w) {
    int s_cnt = 0;
    int lower[26]={0};
    int upper[26]={0};
    for(int i=0;i<strlen(w);i++){
        char ch = w[i];
        if(islower(ch)){
            lower[ch-'a'] = 1;
        }
        else if(isupper(ch)){
            upper[ch-'A'] = 1;
        }
    }
    for(int i=0;i<26;i++){
        if(lower[i] && upper[i] ){
            s_cnt++;
        }
    }
return s_cnt;
}