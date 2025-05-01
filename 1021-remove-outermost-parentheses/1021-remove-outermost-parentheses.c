char* removeOuterParentheses(char* s) {
    int len = strlen(s);
    char *ans = (char *)malloc(len+1);
    int flag = 0 , j =0 ;
    for(int i = 0 ;i < len ; i++){
        if(s[i]=='('){
        if(flag > 0){
            ans[j++] = s[i];
        }
        flag++;
    }else if(s[i]==')'){
        flag -- ;
        if(flag > 0){
            ans[j++] = s[i];
        }
    }
    }
    ans[j++] = '\0';
    return ans;
}