class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    vector<int>res;
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        res.emplace_back(sum);
    }
    return res;
};};