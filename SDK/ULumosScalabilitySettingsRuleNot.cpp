#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleNot.hpp"
ULumosScalabilitySettingsRuleNot* ULumosScalabilitySettingsRuleNot::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleNot");
    return (ULumosScalabilitySettingsRuleNot*)res;
}
