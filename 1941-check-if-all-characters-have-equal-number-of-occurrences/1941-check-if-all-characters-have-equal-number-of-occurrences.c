bool areOccurrencesEqual(char* s) {
    int lettercount[26] = {0};
    int length = strlen(s);
    for(int i=0;i<length;i++){
        lettercount[s[i]-'a']++;
    }
    int first_letter_count = lettercount[s[0]-'a'];
    for(int i=0;i<26;i++){
        if(lettercount[i]!=0 && lettercount[i]!=first_letter_count){
            return false;
        }
    }
    return true;
}