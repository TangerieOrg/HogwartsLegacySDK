#include "UClass.hpp"
#include "UEnvQueryGenerator.hpp"
#include "UEnvQueryGenerator_CurrentLocation.hpp"
UEnvQueryGenerator_CurrentLocation* UEnvQueryGenerator_CurrentLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryGenerator_CurrentLocation");
    return (UEnvQueryGenerator_CurrentLocation*)res;
}
