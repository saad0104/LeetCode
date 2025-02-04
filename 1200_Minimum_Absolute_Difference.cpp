class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        vector<vector<int>> vc;
        int min = INT_MAX;

        sort(arr.begin(), arr.end());

        for (int i = 1; i < arr.size(); i++) {
            int dif = arr[i] - arr[i - 1];

            if (dif < min) {
                min = dif;
                vc.clear();
            }
            if (dif == min) {
                vc.push_back({arr[i - 1], arr[i]});
            }
        }
        return vc;
    }
};