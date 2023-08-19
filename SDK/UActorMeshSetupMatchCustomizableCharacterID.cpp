#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchCustomizableCharacterID.hpp"
UActorMeshSetupMatchCustomizableCharacterID* UActorMeshSetupMatchCustomizableCharacterID::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActorMeshSetupMatchCustomizableCharacterID");
    return (UActorMeshSetupMatchCustomizableCharacterID*)res;
}
