#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchCharacter.hpp"
UActorMeshSetupMatchCharacter* UActorMeshSetupMatchCharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupMatchCharacter");
    return (UActorMeshSetupMatchCharacter*)res;
}
