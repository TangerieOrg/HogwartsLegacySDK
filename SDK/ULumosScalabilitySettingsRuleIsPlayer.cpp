#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleIsPlayer.hpp"
ULumosScalabilitySettingsRuleIsPlayer* ULumosScalabilitySettingsRuleIsPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleIsPlayer");
    return (ULumosScalabilitySettingsRuleIsPlayer*)res;
}
