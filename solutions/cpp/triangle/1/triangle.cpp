#include "triangle.h"

namespace triangle 
{
    void validate(double a, double b, double c)
    {
        if(!(a + b >= c) || !(b + c >= a) || !(a + c >= b)  || (a + b + c == 0))
        {
            throw std::domain_error("Not a triangle !!");
        }
    }
    
    flavor kind(double a, double b, double c)
    {
        validate(a, b, c);
        
        if (a == b && a == c && b == c)
        {
            return flavor::equilateral;
        }
        else if (a == b || a == c || b == c)
        {
            return flavor::isosceles;
        }
        else
        {
            return flavor::scalene;
        }
    }
}  // namespace triangle
