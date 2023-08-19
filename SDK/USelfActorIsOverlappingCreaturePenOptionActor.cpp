#include "UQualifierConsideration.hpp"
#include "USelfActorIsOverlappingCreaturePenOptionActor.hpp"
USelfActorIsOverlappingCreaturePenOptionActor* USelfActorIsOverlappingCreaturePenOptionActor::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfActorIsOverlappingCreaturePenOptionActor");
    return (USelfActorIsOverlappingCreaturePenOptionActor*)res;
}
