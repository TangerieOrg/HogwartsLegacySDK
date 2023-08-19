#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchTrue.hpp"
UActorMeshSetupMatchTrue* UActorMeshSetupMatchTrue::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupMatchTrue");
    return (UActorMeshSetupMatchTrue*)res;
}
