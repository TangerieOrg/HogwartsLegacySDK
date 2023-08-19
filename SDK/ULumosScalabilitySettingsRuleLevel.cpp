#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleLevel.hpp"
ULumosScalabilitySettingsRuleLevel* ULumosScalabilitySettingsRuleLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleLevel");
    return (ULumosScalabilitySettingsRuleLevel*)res;
}
