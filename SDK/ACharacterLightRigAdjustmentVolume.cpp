#include "ACharacterLightRigAdjustmentVolume.hpp"
#include "AVolume.hpp"
#include "FCharacterLightRigAdjustments.hpp"
ACharacterLightRigAdjustmentVolume* ACharacterLightRigAdjustmentVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.CharacterLightRigAdjustmentVolume");
    return (ACharacterLightRigAdjustmentVolume*)res;
}
