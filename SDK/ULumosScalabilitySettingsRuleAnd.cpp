#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleAnd.hpp"
ULumosScalabilitySettingsRuleAnd* ULumosScalabilitySettingsRuleAnd::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleAnd");
    return (ULumosScalabilitySettingsRuleAnd*)res;
}
