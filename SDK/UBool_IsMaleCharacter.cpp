#include "UActorProvider.hpp"
#include "UBoolProvider.hpp"
#include "UBool_IsMaleCharacter.hpp"
UBool_IsMaleCharacter* UBool_IsMaleCharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Bool_IsMaleCharacter");
    return (UBool_IsMaleCharacter*)res;
}
