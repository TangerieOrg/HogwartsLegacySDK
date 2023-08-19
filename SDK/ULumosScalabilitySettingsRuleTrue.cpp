#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleTrue.hpp"
ULumosScalabilitySettingsRuleTrue* ULumosScalabilitySettingsRuleTrue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleTrue");
    return (ULumosScalabilitySettingsRuleTrue*)res;
}
