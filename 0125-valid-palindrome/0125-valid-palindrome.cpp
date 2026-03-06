class Solution {
public:
    bool isPalindrome(string s) {
        string  co ="";
        for(char c:s){
            c = tolower(c);
      if(isalnum(c)) co +=c;
        }
        
        string  rev = co;
        reverse(rev.begin(),rev.end());
       return rev == co;
    }
};