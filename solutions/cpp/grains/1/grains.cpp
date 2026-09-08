#include "grains.h"

namespace grains 
{
    unsigned long long square(int position)
    {
        if(position > 1)
        {
            return 2 * square(position - 1);
        }
        else
        {
        return 1;
        }
    }

    unsigned long long total()
    {
        unsigned long long total{};
        int i = 64;
        
        while(i > 0)
            {
                total += square(i);
                i--;
            }

        return total;
    }
}  // namespace grains
