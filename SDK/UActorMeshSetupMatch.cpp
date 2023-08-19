#include "UActorMeshSetupMatch.hpp"
#include "UObject.hpp"
UActorMeshSetupMatch* UActorMeshSetupMatch::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupMatch");
    return (UActorMeshSetupMatch*)res;
}
