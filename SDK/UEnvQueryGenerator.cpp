#include "UClass.hpp"
#include "UEnvQueryGenerator.hpp"
#include "UEnvQueryNode.hpp"
UEnvQueryGenerator* UEnvQueryGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryGenerator");
    return (UEnvQueryGenerator*)res;
}
