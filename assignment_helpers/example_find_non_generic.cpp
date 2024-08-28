#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

int find_element(std::vector<std::string> v, std::string k)
{   
    // Breakdown of the find function:
    // First parameter: v.begin() 
    //      This tells the find function where to start looking.
    //      v.begin() is a pointer to where a vector starts.
    // Second parameter: v.end()
    //      This tells the find function when to stop looking.
    //      v.end() is a pointer to where a vector stops.
    // Third parameter: k
    //      This tells the find function exactly what you're looking for.

    // You can think of it as doing:
    // 1. start at some place
    // 2. check if the place you're in contains the thing you're looking for.
    // 3. If it does, then return where you found it.
    // 4. If not, go one block down, and repeat 2.
    // 5. If the place you're looking for is the end, then stop.

    auto k_ptr = find(v.begin(), v.end(), k);
    if (k_ptr != v.end()) // We're checking if the function ever found the item before it reaches the end.
    {
        // We know where the item is, now we're just checking how many items it had to check to find it.

        // We could've just returned the pointer then access the item in the pointer, 
        // but for assignment 2 it's helpful to figure out the index
        // of the item. ;D 
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