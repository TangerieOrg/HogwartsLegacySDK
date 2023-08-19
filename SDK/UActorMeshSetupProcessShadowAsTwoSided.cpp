#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessShadowAsTwoSided.hpp"
UActorMeshSetupProcessShadowAsTwoSided* UActorMeshSetupProcessShadowAsTwoSided::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessShadowAsTwoSided");
    return (UActorMeshSetupProcessShadowAsTwoSided*)res;
}
