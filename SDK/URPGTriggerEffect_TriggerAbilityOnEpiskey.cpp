#include "URPGAbilityBase.hpp"
#include "URPGTriggerEffect_OnEpiskey.hpp"
#include "URPGTriggerEffect_TriggerAbilityOnEpiskey.hpp"
URPGTriggerEffect_TriggerAbilityOnEpiskey* URPGTriggerEffect_TriggerAbilityOnEpiskey::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_TriggerAbilityOnEpiskey");
    return (URPGTriggerEffect_TriggerAbilityOnEpiskey*)res;
}
