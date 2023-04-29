

#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> vec = {1, 2, -5, 8, 10, 15, -100};
    int k = 4;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int ans = INT_MIN;
    pq.push({0, 0});
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
        cout << sum << " ";
        bool done = false;
        while (!pq.empty() && !done)
        {

            if (pq.top().second < i - k + 1)
            {
                pq.pop();
            }
            else
            {
                ans = max(ans, sum - pq.top().first);
                done = true;
            }
        }

        pq.push({sum, i + 1});
    }

    cout << endl
         << ans;

    return 0;
}
