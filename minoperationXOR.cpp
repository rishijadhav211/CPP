#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> a = {4, 7, 2, 5, 6};
    int n = a.size();
    int k = 3;
    unordered_map<int, int> freq;
    int xor_val = 0;
    for (int i = 0; i < k; i++)
    {
        xor_val ^= a[i];
    }
    freq[xor_val] = 1;
    int ops = 0;
    for (int i = k; i < n; i++)
    {
        xor_val ^= a[i - k] ^ a[i];
        freq[xor_val]++;
    }
    for (auto p : freq)
    {
        ops += (p.second * (p.second - 1)) / 2;
    }
    cout << ops << endl;
    return 0;
}