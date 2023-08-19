#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleLevelBase.hpp"
ULumosScalabilitySettingsRuleLevelBase* ULumosScalabilitySettingsRuleLevelBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleLevelBase");
    return (ULumosScalabilitySettingsRuleLevelBase*)res;
}
