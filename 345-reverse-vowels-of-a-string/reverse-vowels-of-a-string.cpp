class Solution {
public:
bool isVowel(char ch){
            return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
             ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
        }
    string reverseVowels(string s) {
        int n=s.size();
        int right=n-1;
        int left=0;
        
        while(left<right){
            while(left<right && !isVowel(s[left])){
                left++;
            }
            while(left<right && !isVowel(s[right])){
                right--;
            }
            if(left< right){
                swap(s[left],s[right]);
            }
            right--;
            left++;
        }
        return s;
        
    }
};