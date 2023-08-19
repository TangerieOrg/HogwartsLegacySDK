#include "UEnvQueryItemType.hpp"
#include "UEnvQueryItemType_VectorBase.hpp"
UEnvQueryItemType_VectorBase* UEnvQueryItemType_VectorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryItemType_VectorBase");
    return (UEnvQueryItemType_VectorBase*)res;
}
