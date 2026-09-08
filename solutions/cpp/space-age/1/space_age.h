#pragma once

#include <cmath>

namespace space_age {

    constexpr double MERCURY = 0.2408467;
    constexpr double VENUS   = 0.61519726;
    constexpr double EARTH   = 1.0;
    constexpr double MARS    = 1.8808158;
    constexpr double JUPITER = 11.862615;
    constexpr double SATURN  = 29.447498;
    constexpr double URANUS  = 84.016846;
    constexpr double NEPTUNE = 164.79132;
    constexpr double SECONDS    = 365.256 * 24.0 * 60.0 * 60.0;

    double round(double number);
    
    class space_age
    {
    public :
    space_age(unsigned long int age);
    double seconds() const;
    double on_mercury() const;
    double on_venus() const;
    double on_earth() const;
    double on_mars() const;
    double on_jupiter() const;
    double on_saturn() const;
    double on_uranus() const;
    double on_neptune() const;
    private:
    unsigned long int age{};
    };

}  // namespace space_age
