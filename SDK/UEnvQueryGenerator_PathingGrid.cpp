#include "FAIDataProviderBoolValue.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "UClass.hpp"
#include "UEnvQueryGenerator_PathingGrid.hpp"
#include "UEnvQueryGenerator_SimpleGrid.hpp"
UEnvQueryGenerator_PathingGrid* UEnvQueryGenerator_PathingGrid::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryGenerator_PathingGrid");
    return (UEnvQueryGenerator_PathingGrid*)res;
}
