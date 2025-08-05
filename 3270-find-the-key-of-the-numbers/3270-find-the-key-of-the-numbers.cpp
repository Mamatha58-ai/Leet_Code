class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string key = "";
       while(num1 != 0  || num2 != 0 || num3 != 0){
        int key1 = num1%10;
        int key2 = num2%10;
        int key3 = num3%10;
        int mini = min({key1,key2,key3});
         key = key  + to_string(mini);
        num1 = num1/10 ;
        num2 = num2/10; 
        num3 = num3/10; 
       }
       reverse(key.begin(),key.end());  
       int num = stoi(key);
       return num; 
    } 
};