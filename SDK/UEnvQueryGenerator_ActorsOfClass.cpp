#include "FAIDataProviderBoolValue.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "UClass.hpp"
#include "UEnvQueryGenerator.hpp"
#include "UEnvQueryGenerator_ActorsOfClass.hpp"
UEnvQueryGenerator_ActorsOfClass* UEnvQueryGenerator_ActorsOfClass::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryGenerator_ActorsOfClass");
    return (UEnvQueryGenerator_ActorsOfClass*)res;
}
