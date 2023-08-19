#include "UEnvQueryItemType_Actor.hpp"
#include "UEnvQueryItemType_ActorBase.hpp"
UEnvQueryItemType_Actor* UEnvQueryItemType_Actor::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryItemType_Actor");
    return (UEnvQueryItemType_Actor*)res;
}
