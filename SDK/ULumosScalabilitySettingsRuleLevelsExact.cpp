#include "FLerpVolumesLevelName.hpp"
#include "ULumosScalabilitySettingsRuleLevelBase.hpp"
#include "ULumosScalabilitySettingsRuleLevelsExact.hpp"
ULumosScalabilitySettingsRuleLevelsExact* ULumosScalabilitySettingsRuleLevelsExact::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleLevelsExact");
    return (ULumosScalabilitySettingsRuleLevelsExact*)res;
}
