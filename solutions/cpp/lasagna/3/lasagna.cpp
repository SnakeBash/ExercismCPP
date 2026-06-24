#define BAKE_TIME 40

int ovenTime() 
{
    return BAKE_TIME;
}

int remainingOvenTime(int actualMinutesInOven) 
{
    return ovenTime() - actualMinutesInOven;
}

int preparationTime(int numberOfLayers) 
{
    return 2 * numberOfLayers;
}

int elapsedTime(int numberOfLayers, int actualMinutesInOven) 
{
    return preparationTime(numberOfLayers) + actualMinutesInOven;
}
