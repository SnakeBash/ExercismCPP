#pragma once

#include <vector>
#include <string>

namespace raindrops {

    enum class sound {
    Pling,
    Plang,
    Plong
    };

    std::string sound_builder(std::vector<sound>& sounds);
    std::string convert(int number);

}  // namespace raindrops
