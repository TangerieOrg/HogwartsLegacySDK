#include "UClass.hpp"
#include "UEnvQueryGenerator.hpp"
#include "UEnvQueryGenerator_Composite.hpp"
UEnvQueryGenerator_Composite* UEnvQueryGenerator_Composite::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryGenerator_Composite");
    return (UEnvQueryGenerator_Composite*)res;
}
