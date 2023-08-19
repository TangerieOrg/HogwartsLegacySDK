#include "FActorMeshSetupAutoDefinition.hpp"
#include "FActorMeshSetupNamedDefinition.hpp"
#include "UActorMeshSetupDefinitions.hpp"
#include "UDataAsset.hpp"
UActorMeshSetupDefinitions* UActorMeshSetupDefinitions::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupDefinitions");
    return (UActorMeshSetupDefinitions*)res;
}
