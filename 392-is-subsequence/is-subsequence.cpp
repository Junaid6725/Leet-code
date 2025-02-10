class Solution {

public:
    bool isSubsequence(string s, string t) {
        int len_s=s.size();
        int len_t=t.size();
        int count_t=0;
        int count_s=0;
        while(count_s<len_s && count_t<len_t){
            if(s[count_s]==t[count_t]){
                count_s++;
            }
            count_t++;
        }
        return len_s == count_s;
        
    
        
    }
};