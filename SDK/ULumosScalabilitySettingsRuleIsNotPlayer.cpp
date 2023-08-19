#include "ULumosScalabilitySettingsRule.hpp"
#include "ULumosScalabilitySettingsRuleIsNotPlayer.hpp"
ULumosScalabilitySettingsRuleIsNotPlayer* ULumosScalabilitySettingsRuleIsNotPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilitySettingsRuleIsNotPlayer");
    return (ULumosScalabilitySettingsRuleIsNotPlayer*)res;
}
