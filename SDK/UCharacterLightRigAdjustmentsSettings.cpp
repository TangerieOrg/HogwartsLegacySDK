#include "FCharacterLightRigAdjustments.hpp"
#include "UCharacterLightRigAdjustmentsSettings.hpp"
#include "UDataAsset.hpp"
UCharacterLightRigAdjustmentsSettings* UCharacterLightRigAdjustmentsSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.CharacterLightRigAdjustmentsSettings");
    return (UCharacterLightRigAdjustmentsSettings*)res;
}
