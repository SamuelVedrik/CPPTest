#include <iostream>
#include <random>
#include <vector> 

std::default_random_engine get_generator()
{
    std::random_device rd;  // Will be used to obtain a seed for the random number engine
    std::default_random_engine gen(rd());
    return gen;
}

int main()
{
    std::default_random_engine gen = get_generator();
    std::discrete_distribution<> dis({0.4, 0.1, 0.1, 0.4});
    for (int n = 0; n < 10; ++n){
        std::cout << dis(gen) << '\n';
    };
    std::cout << '\n';
}