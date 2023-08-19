#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleOr.hpp"
ULumosScalabilitySettingsRuleOr* ULumosScalabilitySettingsRuleOr::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleOr");
    return (ULumosScalabilitySettingsRuleOr*)res;
}
