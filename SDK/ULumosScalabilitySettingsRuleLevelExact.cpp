#include "FLerpVolumesLevelName.hpp"
#include "ULumosScalabilitySettingsRuleLevelBase.hpp"
#include "ULumosScalabilitySettingsRuleLevelExact.hpp"
ULumosScalabilitySettingsRuleLevelExact* ULumosScalabilitySettingsRuleLevelExact::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleLevelExact");
    return (ULumosScalabilitySettingsRuleLevelExact*)res;
}
