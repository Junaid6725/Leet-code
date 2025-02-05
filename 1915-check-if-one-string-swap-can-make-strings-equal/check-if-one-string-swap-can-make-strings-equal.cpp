class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int>index;
        for(int i=0;i<s1.size();i++){
            if(s1[i] != s2[i]){
                index.emplace_back(i);
            }
        }
        if(index.empty())return true;
        else if(index.size() != 2)return false;

        int j=index[0],k=index[1];
        return (s1[j]==s2[k] && s1[k]==s2[j]);
    }
};