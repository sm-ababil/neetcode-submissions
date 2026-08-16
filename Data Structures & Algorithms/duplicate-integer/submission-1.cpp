class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0; i<(int)nums.size(); i++){
            if (s.count(nums[i])){
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};