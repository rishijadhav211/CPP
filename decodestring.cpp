#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decodeString(string s)
    {
        int i = 0;
        return decodeString(s, i);
    }
    string decodeString(string s, int &i)
    {
        string ans = "";
        while (i < s.length() && s[i] != ']')
        {
            int digit = 0;
            if (isdigit(s[i]))
            {
                while (isdigit(s[i]))
                {
                    digit = digit * 10 + s[i++] - '0';
                }

                i++;
                string next = decodeString(s, i);
                i++;

                while (digit--)
                {
                    ans += next;
                }
            }
            else
            {
                ans += s[i++];
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.decodeString("3[a]2[bc]");
}