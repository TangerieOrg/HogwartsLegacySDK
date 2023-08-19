#include "FDbSingleColumnInfo.hpp"
#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleNPCKey.hpp"
ULumosScalabilitySettingsRuleNPCKey* ULumosScalabilitySettingsRuleNPCKey::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleNPCKey");
    return (ULumosScalabilitySettingsRuleNPCKey*)res;
}
