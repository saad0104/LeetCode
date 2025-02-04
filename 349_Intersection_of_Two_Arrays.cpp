class Solution {
public:
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{

    set<int> s1, s2, fin;
    vector<int> vc;

    for (int i = 0; i < nums1.size(); i++)
    {
        s1.insert(nums1[i]);
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        s2.insert(nums2[i]);
    }

    set_intersection(s1.begin(), s1.end(),
                     s2.begin(), s2.end(),
                     inserter(fin, fin.begin()));

    for (int num : fin)
    {
        vc.push_back(num);
    }
    return vc;
}
};