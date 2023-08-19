#include "UEnvQueryItemType_ActorBase.hpp"
#include "UEnvQueryItemType_VectorBase.hpp"
UEnvQueryItemType_ActorBase* UEnvQueryItemType_ActorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryItemType_ActorBase");
    return (UEnvQueryItemType_ActorBase*)res;
}
