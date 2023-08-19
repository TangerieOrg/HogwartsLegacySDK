#include "AActor.hpp"
#include "URPGTriggerEffect_AddAbilityOnMessage.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGTriggerEffect_AddAbilityOnMessage* URPGTriggerEffect_AddAbilityOnMessage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_AddAbilityOnMessage");
    return (URPGTriggerEffect_AddAbilityOnMessage*)res;
}
