#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

int find_element(std::vector<std::string> v, std::string k)
{
    auto k_ptr = find(v.begin(), v.end(), k);
    if (k_ptr != v.end())
    {
        return distance(v.begin(), k_ptr);
    }
    else
    {
        // Item not found
        return -1;
    }
}

int main()
{
    std::vector<std::string> test = {"test", "hello", "why hello there"};
    int idx = find_element(test, "why hello there");
    std::cout << "Element index:" << idx << "\n";
    std::cout << "Element:" << test[idx];
}