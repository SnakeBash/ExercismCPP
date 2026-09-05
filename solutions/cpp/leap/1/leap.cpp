#include "leap.h"

namespace leap 
{
    bool is_leap_year(int iYear)
    {
        if(iYear % 100 == 0)
        {
            return iYear % 400 == 0 && iYear % 4 == 0 ? true : false;
        }
        
        return iYear % 4 == 0 ? true : false;
    }
}  // namespace leap
