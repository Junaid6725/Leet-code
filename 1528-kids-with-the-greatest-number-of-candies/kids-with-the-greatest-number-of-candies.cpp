class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=*max_element(candies.begin(), candies.end());
        vector<bool>res;
        int len=candies.size();
        for(int i=0;i<len;i++){
        res.emplace_back(candies[i]+extraCandies >= max);
        }
        return res;
    }
};