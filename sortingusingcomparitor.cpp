#include <iostream>
#include <vector>
#include <algorithm>

// Comparator object to define custom ordering
struct CustomComparator
{
    bool operator()(int a, int b)
    {
        // Define custom criteria for comparison
        return a > b; // Sort in descending order
    }
};

int main()
{
    std::vector<int> numbers = {5, 2, 8, 1, 7};

    // Sorting using a comparator object
    std::sort(numbers.begin(), numbers.end(), CustomComparator());

    // Display the sorted numbers
    std::cout << "Sorted Numbers: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
