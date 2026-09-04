#include <vector>
#include <string>

#pragma once

#define NOODLES_PER_LAYER 50
#define SAUCE_PER_LAYER 0.2

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

    int preparationTime(std::vector<std::string> layers, int average=2);

    amount quantities(std::vector<std::string> layers);

    void addSecretIngredient(std::vector<std::string>& layers, const std::vector<std::string>& secretLayers);

    void addSecretIngredient(std::vector<std::string>& layers, const std::string& secretLayer);

    std::vector<double> scaleRecipe(const std::vector<double> quantities, int portions);

}  // namespace lasagna_master
