class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int right=n-1;
        int left=0;
        while(left<right){
        while(left<right && !isalnum(s[left])){
        left++;    
        }
        while(left<right && !isalnum(s[right])){
        right--;
        }
        if(tolower(s[left]) != tolower(s[right])){
            return false;}
        right--;
        left++;
    }
    return true;}
};