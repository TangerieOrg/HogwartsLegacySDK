#include "UDataAsset.hpp"
#include "UEnvironmentalGlobalsSeasonPhases.hpp"
UEnvironmentalGlobalsSeasonPhases* UEnvironmentalGlobalsSeasonPhases::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsSeasonPhases");
    return (UEnvironmentalGlobalsSeasonPhases*)res;
}
