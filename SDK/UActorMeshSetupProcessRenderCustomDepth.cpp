#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessRenderCustomDepth.hpp"
UActorMeshSetupProcessRenderCustomDepth* UActorMeshSetupProcessRenderCustomDepth::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessRenderCustomDepth");
    return (UActorMeshSetupProcessRenderCustomDepth*)res;
}
