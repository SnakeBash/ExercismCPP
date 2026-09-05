#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& person, std::string artifactName)
    {
        person.possession = std::make_unique<artifact>(artifactName);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& artifactA, std::unique_ptr<artifact>& artifactB)
    {
        std::swap(artifactA, artifactB);
    }

    void manifest_power(human& person, std::string powerName)
    {
        person.own_power = std::make_shared<power>(powerName);
    }

    void use_power(human& personA, human& personB)
    {
        personB.influenced_by = personA.own_power;
    }

    int power_intensity(const human& person)
    {
        if(!person.own_power)
        {
            return 0;
        }

        return person.own_power.use_count();
    }
}  // namespace troy
