#include "doctor_data.h"

heaven::Vessel::Vessel(std::string name, int generation)
{
    this->name = name;
    this->generation = generation;
    this->system = star_map::System::Sol;
}

heaven::Vessel::Vessel(std::string name, int generation, star_map::System system)
{
    this->name = name;
    this->generation = generation;
    this->system = system;
}

heaven::Vessel heaven::Vessel::replicate(std::string name)
{   
    return heaven::Vessel{name, this->generation + 1, star_map::System::Sol};;
}

void heaven::Vessel::make_buster()
{
    this->busters++;
}

bool heaven::Vessel::shoot_buster()
{
    if(busters > 0)
    {
        busters--;

        return true;
    }

    return false;
}

std::string heaven::get_older_bob(heaven::Vessel vesselA, heaven::Vessel vesselB)
{
    if(vesselA.generation <= vesselB.generation)
    {
        return vesselA.name;
    }
    
    return vesselB.name;
}

bool heaven::in_the_same_system(heaven::Vessel vesselA, heaven::Vessel vesselB)
{
    if(vesselA.system == vesselB.system)
    {
        return true;
    }
    
    return false;
}