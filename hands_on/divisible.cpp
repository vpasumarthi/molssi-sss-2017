// Script to compute number of integers between 1 and 1000 divisible by 3, 5, 7
#include <iostream>
#include <stdint.h>
#include <vector>

int main()
{
    std::vector<int> divisors = {3, 5, 7, 13, 39, 42};
    //std::vector<int64_t> count = {0, 0, 0, 0, 0, 0};
    std::vector<int64_t> counts(divisors.size(), 0);
    for (int i = 1; i < 1001; i++)
    {
        for (int j = 0; j < divisors.size(); j++)
        {
            // condition to check divisibility by divisors
            if (i % divisors[j] == 0)
            {
                ++counts[j];
            }
        }
    }

    for (int j = 0; j < divisors.size(); j++)
    {
        counts[j] *= 100000000000ll;
        counts[j] /= 1000;

        std::cout << "The count of numbers divisible by " << divisors[j] << " is: " << counts[j] << '\n';
    }

}
