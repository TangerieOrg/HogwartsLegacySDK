#include "UEnvQueryItemType.hpp"
#include "UObject.hpp"
UEnvQueryItemType* UEnvQueryItemType::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryItemType");
    return (UEnvQueryItemType*)res;
}
