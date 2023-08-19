#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchActorTag.hpp"
UActorMeshSetupMatchActorTag* UActorMeshSetupMatchActorTag::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupMatchActorTag");
    return (UActorMeshSetupMatchActorTag*)res;
}
