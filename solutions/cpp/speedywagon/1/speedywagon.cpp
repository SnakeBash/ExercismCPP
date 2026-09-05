#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array)
    {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

    bool connection_check(pillar_men_sensor* ptrSensor)
    {
        if(!ptrSensor)
        {
            return false;
        }

        return true;
    }

    int activity_counter(pillar_men_sensor* ptrSensors, int capacity)
    {
        int counter{};

        for (int i = 0; i < capacity; i++)
        {
            counter += (ptrSensors + i)->activity;
        }

        return counter;
    }

    bool alarm_control(pillar_men_sensor* ptrSensor)
    {    
        if(!ptrSensor)    
        {        
            return false;
        }
        
        return ptrSensor->activity > 0;
    }

    
    bool uv_alarm(pillar_men_sensor* ptrSensor)
    {
        if(!ptrSensor)
        {
            return false;
        }
        
        int uv = uv_light_heuristic(&(ptrSensor->data));

        return uv > ptrSensor->activity;
    }

}  // namespace speedywagon
