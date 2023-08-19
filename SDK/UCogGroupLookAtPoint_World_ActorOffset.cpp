#include "FVector.hpp"
#include "UCogGroupLookAtPoint.hpp"
#include "UCogGroupLookAtPoint_World_ActorOffset.hpp"
UCogGroupLookAtPoint_World_ActorOffset* UCogGroupLookAtPoint_World_ActorOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupLookAtPoint_World_ActorOffset");
    return (UCogGroupLookAtPoint_World_ActorOffset*)res;
}
