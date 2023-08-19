#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleFalse.hpp"
ULumosScalabilitySettingsRuleFalse* ULumosScalabilitySettingsRuleFalse::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleFalse");
    return (ULumosScalabilitySettingsRuleFalse*)res;
}
