#include "UActorComponent.hpp"
#include "UCharacterBoneProjector.hpp"
#include "UCharacterBoneProjectorComponent.hpp"
UCharacterBoneProjectorComponent* UCharacterBoneProjectorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CharacterBoneProjectorComponent");
    return (UCharacterBoneProjectorComponent*)res;
}
