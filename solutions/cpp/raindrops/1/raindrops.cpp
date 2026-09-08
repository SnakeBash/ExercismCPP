#include "raindrops.h"

namespace raindrops {
    
    std::string convert(int number)
    {
        std::vector<sound> sounds{};

        if(number % 3 == 0)
        {
            sounds.push_back(sound::Pling);
        }
        
        if(number % 5 == 0)
        {
            sounds.push_back(sound::Plang);
        }
        
        if(number % 7 == 0) 
        {
            sounds.push_back(sound::Plong);
        }

        if(sounds.empty())
        {
            return std::to_string(number);
        }

        return sound_builder(sounds);
    }

    std::string sound_builder(std::vector<sound>& sounds)
    {
        std::string answer{""};

        for(sound noise : sounds)
             {
                 switch(noise)
                     {
                         case sound::Pling :
                             answer += "Pling";
                         break;
                         case sound::Plang :
                             answer += "Plang";
                         break;
                         case sound::Plong :
                             answer += "Plong";
                         break;
                         default :
                         answer += "Invalid";
                     }
             }

        return answer;
    }

}  // namespace raindrops
