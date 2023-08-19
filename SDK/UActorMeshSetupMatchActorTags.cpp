#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchActorTags.hpp"
UActorMeshSetupMatchActorTags* UActorMeshSetupMatchActorTags::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupMatchActorTags");
    return (UActorMeshSetupMatchActorTags*)res;
}
