class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
     sort(nums.begin(), nums.end());
     auto last = unique(nums.begin(), nums.end());
     nums.erase(last, nums.end());
     int sz = nums.size();

     if(sz==size)
     {
        return false;
     }
     else
     {
        return true;
     }
    }
};