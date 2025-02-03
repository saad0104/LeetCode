class Solution
{
public:
    int firstUniqChar(string s)
    {

        int freq[26];

        for (int i = 0; i < 26; i++)
        {
            freq[i] = 0;
        }

        for (char Ch : s)
        {
            freq[Ch - 'a']++;
        }

        for (int i = 0; i < s.length(); i++)
        {
            int x = s[i] - 'a';
            if (freq[x] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};