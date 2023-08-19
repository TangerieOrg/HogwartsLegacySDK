#include "FAIDataProviderFloatValue.hpp"
#include "UClass.hpp"
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
#include "UEnvQueryGenerator_SimpleGrid.hpp"
UEnvQueryGenerator_SimpleGrid* UEnvQueryGenerator_SimpleGrid::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryGenerator_SimpleGrid");
    return (UEnvQueryGenerator_SimpleGrid*)res;
}
