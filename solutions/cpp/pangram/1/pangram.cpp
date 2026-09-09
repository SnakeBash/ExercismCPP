#include "pangram.h"

namespace pangram {

    bool is_pangram(const std::string text)
    {
        for(char c : alphabet)
            {
                auto it = std::find(text.begin(),text.end(), c);

                if(it == text.end())
                {
                    c = static_cast<char>(std::toupper(c));
                    it = std::find(text.begin(),text.end(), c);
                    
                    if(it == text.end())
                    {
                        return false;
                    }
                }
            }
        
        return true;
    }
}  // namespace pangram
