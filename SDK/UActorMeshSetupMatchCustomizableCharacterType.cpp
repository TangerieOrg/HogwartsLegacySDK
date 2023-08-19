#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchCustomizableCharacterType.hpp"
UActorMeshSetupMatchCustomizableCharacterType* UActorMeshSetupMatchCustomizableCharacterType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActorMeshSetupMatchCustomizableCharacterType");
    return (UActorMeshSetupMatchCustomizableCharacterType*)res;
}
