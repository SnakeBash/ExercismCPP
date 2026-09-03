#pragma once
#include <string>

namespace star_map
{
    enum class System
    {
    Sol,
    BetaHydri,
    EpsilonEridani,
    Omicron2Eridani,
    DeltaEridani,
    AlphaCentauri
    };
}

namespace heaven
{
    struct Vessel
    {
    Vessel(std::string name, int generation);
    Vessel(std::string name, int generation, star_map::System system);
    Vessel replicate(std::string name);
    void make_buster();
    bool shoot_buster();
    int generation{};
    star_map::System current_system{};
    int busters{};
    std::string name{};
    star_map::System system{star_map::System::Sol}; 
    };

std::string get_older_bob(heaven::Vessel vesselA, heaven::Vessel vesselB);
bool in_the_same_system(heaven::Vessel vesselA, heaven::Vessel vesselB);
}