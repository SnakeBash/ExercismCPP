#include "hamming.h"

namespace hamming 
{
    int compute(std::string stringA, std::string stringB)
    {
        int distance{};
        int position{};
        

        if(stringA.empty() && stringB.empty())
        {
            return distance;
        }

        if(stringA.empty() || stringB.empty())
        {
            throw std::domain_error("String empty!");
        }

        if(stringA.size() != stringB.size())
        {
            throw std::domain_error("String not the same size!");
        }
        
        auto it = stringA.begin();

        while(it != stringA.end())
            {
                position = std::distance(stringA.begin(), it);
                
                if(*it != stringB[position])
                {
                    distance++;
                }
                
                it++;
            }
        
        return distance;
    }
}
