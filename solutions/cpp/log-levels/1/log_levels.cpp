#include <string>
#include <cstdint>

namespace log_line 
{

    std::string message(std::string line) 
    {
        uint64_t uiIndex{line.find("]: ")}; 
        std::string strMessage{line.substr(uiIndex + 3)};

        return strMessage;
    }

std::string log_level(std::string line) 
    {
        uint64_t uiBegin{line.find("[")};
        uint64_t uiEnd{line.find("]")}; 
        std::string strLevel{line.substr(uiBegin + 1, uiEnd - 1)};

        return strLevel;
    }

std::string reformat(std::string line) 
    {
    return message(line) + " (" + log_level(line) + ")"; 
    }
}  // namespace log_line
