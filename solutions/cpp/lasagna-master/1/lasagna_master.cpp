#include "lasagna_master.h"

namespace lasagna_master {

    int preparationTime(std::vector<std::string> layers, int average)
    {
        return layers.size() * average;
    }

    amount quantities(std::vector<std::string> layers)
    {
        int noodles{};
        double sauce{};

        for(std::string layer : layers)
            {
                if(layer == "noodles")
                {
                    noodles += NOODLES_PER_LAYER;
                }
                else if(layer == "sauce")
                {
                    sauce += SAUCE_PER_LAYER;
                }
            }
        
        return amount{noodles, sauce};
    }

    void addSecretIngredient(std::vector<std::string>& layers, const std::vector<std::string>& secretLayers)
    {
        layers.pop_back();
        layers.push_back(secretLayers.back());
    }

    std::vector<double> scaleRecipe(const std::vector<double> quantities, int portions)
    {
        std::vector<double> scaled{};

        for(double quantity : quantities)
            {
                scaled.push_back(quantity * (static_cast<double>(portions) / 2));
            }

        return scaled;
    }

    void addSecretIngredient(std::vector<std::string>& layers, const std::string& secretLayer)
    {
        layers.pop_back();
        layers.push_back(secretLayer);
    }

}  // namespace lasagna_master
