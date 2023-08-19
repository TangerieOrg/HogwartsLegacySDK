#include "UActorMeshSetupProcessCapsuleShadows.hpp"
#include "UActorMeshSetupProcessFiltered.hpp"
UActorMeshSetupProcessCapsuleShadows* UActorMeshSetupProcessCapsuleShadows::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessCapsuleShadows");
    return (UActorMeshSetupProcessCapsuleShadows*)res;
}
