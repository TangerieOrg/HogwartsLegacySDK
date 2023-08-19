#include "UActorProvider.hpp"
#include "UBoolProvider.hpp"
#include "UBool_IsFemaleCharacter.hpp"
UBool_IsFemaleCharacter* UBool_IsFemaleCharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Bool_IsFemaleCharacter");
    return (UBool_IsFemaleCharacter*)res;
}
