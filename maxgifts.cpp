

#include <iostream>
#include <cmath>
using namespace std;

int giftsRemaining(int gifts[], int n, int k)
{
    while (k--)
    {
        int max = 0;

        for (int i = 0; i < n; i++)
        {

            if (gifts[i] > max)
            {
                max = gifts[i];
            }
        }

        for (int i = 0; i < n; i++)
        {

            if (gifts[i] == max)
            {

                int floorValue = floor(sqrt(gifts[i]));

                gifts[i] -= floorValue;
            }
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {

        sum += gifts[i];
    }
    cout << sum;
    return sum;
}

// Driver code to test above function.
int main()
{
    int gifts[] = {10, 5, 3, 2};
} // array of number of gifts in various piles.    												     // Number of piles.    					      // Number of seconds.    	      // Function call.     cout << "Number of Gifts remaining after " << k << " seconds is " << giftsRemaining(gifts, n, k);      return 0; }