// Counting Sort

class Solution {
public:
    void sortColors(vector<int>& nums) {

int size = nums.size();

    int max = *max_element(nums.begin(), nums.end());
    int freq[3] = {0};
    int sorted[size];

    for (int i = 0; i < size; i++)
    {
        freq[nums[i]]++;
    }

    for (int i = 1; i <= max; i++)
    {
        freq[i] += freq[i - 1];
    }
    int s = size - 1;
    while (s >= 0)
    {
        sorted[freq[nums[s]] - 1] = nums[s];
        freq[nums[s]]--;
        s--;
    }
    for (int i = 0; i < size; i++)
    {
        nums[i] = sorted[i];
    }

    }
};