#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessIgnoreLightLeaking.hpp"
UActorMeshSetupProcessIgnoreLightLeaking* UActorMeshSetupProcessIgnoreLightLeaking::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessIgnoreLightLeaking");
    return (UActorMeshSetupProcessIgnoreLightLeaking*)res;
}
