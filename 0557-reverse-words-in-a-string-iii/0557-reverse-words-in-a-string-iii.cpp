class Solution {
public://jay shree krishna
    string reverse(string a){
        string ans = "";
        for(int i = a.length()-1;i>=0;i--){
            ans += a[i];
        }
        return ans;
    }
    string reverseWords(string s) {
        string ans = "";
        string temp = "";
        for(int i = 0;i<s.length();i++){
               
            if(isspace(s.at(i)) == false){
                temp = temp + s[i];
            }
            if(isspace(s.at(i)) and  temp.length() > 0){
                ans = ans + reverse(temp) + " ";
                temp ="";
            }
            if(i == s.length()-1 ){
                ans = ans + reverse(temp);
            }
            
        }
    return ans;}
};