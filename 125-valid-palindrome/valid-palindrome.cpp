class Solution {
public:
    bool isalphanum(char ch){
        if((ch>='0'&&ch<='9')||(tolower(ch)>='a'&&tolower(ch)<='z')){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int st=0,ed=s.length()-1;
        while(st<ed){
            if(!isalphanum(s[st])){
                st++;continue;
            }
            if(!isalphanum(s[ed])){
                ed--;continue;
            }
            if(tolower(s[st])!=tolower(s[ed])){
                return false;
            }
            st++;ed--;

        }
        return true;
        
    }
};