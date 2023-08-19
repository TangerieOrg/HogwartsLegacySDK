#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessSelfShadowOnly.hpp"
UActorMeshSetupProcessSelfShadowOnly* UActorMeshSetupProcessSelfShadowOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessSelfShadowOnly");
    return (UActorMeshSetupProcessSelfShadowOnly*)res;
}
