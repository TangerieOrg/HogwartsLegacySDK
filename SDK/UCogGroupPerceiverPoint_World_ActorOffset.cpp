#include "FVector.hpp"
#include "UCogGroupPerceiverPoint.hpp"
#include "UCogGroupPerceiverPoint_World_ActorOffset.hpp"
UCogGroupPerceiverPoint_World_ActorOffset* UCogGroupPerceiverPoint_World_ActorOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupPerceiverPoint_World_ActorOffset");
    return (UCogGroupPerceiverPoint_World_ActorOffset*)res;
}
