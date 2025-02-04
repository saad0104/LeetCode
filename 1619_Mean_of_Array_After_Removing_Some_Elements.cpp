class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int x = arr.size()/20;

        int sum = 0;
        int count = 0;



        for (int i = x; i < arr.size() - x; i++) {
            sum += arr[i];
            count++;
        }
        return  double(sum)/count;
    }
};