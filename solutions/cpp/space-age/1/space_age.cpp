#include "space_age.h"

namespace space_age {

    space_age::space_age(unsigned long int age)
    {
        this->age = age;
    }

    double round(double number)
    {
        return std::round(number * 1000) / 1000;
    }
    
    double space_age::seconds() const
    {
        return this->age;
    }
    
    double space_age::on_mercury() const
    {
        return round(static_cast<double>(this->age) / (SECONDS * MERCURY));
    }
    
    double space_age::on_venus() const
    {
        return round(static_cast<double>(this->age) /double (SECONDS * VENUS));
    }
    
    double space_age::on_earth() const
    {
        return round(static_cast<double>(this->age) /double (SECONDS * EARTH));
    }
    
    double space_age::on_mars() const
    {
        return round(static_cast<double>(this->age) /double (SECONDS * MARS));
    }
    
    double space_age::on_jupiter() const
    {
        return round(static_cast<double>(this->age) /double (SECONDS * JUPITER));
    }
    
    double space_age::on_saturn() const
    {
        return round(static_cast<double>(this->age) /double (SECONDS * SATURN));
    }
    
    double space_age::on_uranus() const
    {
        return round(static_cast<double>(this->age) /double (SECONDS * URANUS));
    }
    
    double space_age::on_neptune() const
    {
        return round(static_cast<double>(this->age) /double (SECONDS * NEPTUNE));
    }

}  // namespace space_age
