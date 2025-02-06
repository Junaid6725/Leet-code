class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string combo="";
        int word1_len=word1.size();
        int word2_len=word2.size();
        int max_len=max(word1_len,word2_len);
        for(int i=0;i<max_len;i++){
            if(i<word1_len){
                combo+=word1[i];
            }
            if(i<word2_len){
                combo+=word2[i];
            }
        }
        return combo;

        
    }
};