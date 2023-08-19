#include "UActorMeshSetupProcessCapsuleShadows.hpp"
#include "UActorMeshSetupProcessSetupCharacterShadows.hpp"
UActorMeshSetupProcessSetupCharacterShadows* UActorMeshSetupProcessSetupCharacterShadows::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessSetupCharacterShadows");
    return (UActorMeshSetupProcessSetupCharacterShadows*)res;
}
