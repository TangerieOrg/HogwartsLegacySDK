#include "FVector.hpp"
#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_World_ActorOffset.hpp"
UCogGroupTargetPoint_World_ActorOffset* UCogGroupTargetPoint_World_ActorOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_World_ActorOffset");
    return (UCogGroupTargetPoint_World_ActorOffset*)res;
}
