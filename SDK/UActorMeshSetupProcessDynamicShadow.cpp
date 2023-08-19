#include "UActorMeshSetupProcessDynamicShadow.hpp"
#include "UActorMeshSetupProcessFiltered.hpp"
UActorMeshSetupProcessDynamicShadow* UActorMeshSetupProcessDynamicShadow::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessDynamicShadow");
    return (UActorMeshSetupProcessDynamicShadow*)res;
}
