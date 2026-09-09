#pragma once

#include <vector>
#include <string>
#include <algorithm>

namespace pangram 
{
    const char alphabet[]{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    bool is_pangram(const std::string text);
}  // namespace pangram
