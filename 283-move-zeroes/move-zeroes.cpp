class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int zero = 0; // pointer for the position to place the next non-zero

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[zero]);
            zero++;
        }
    }}
};