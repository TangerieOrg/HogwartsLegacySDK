#include "ABiped_Player.hpp"
#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnDodgeRollFinished.hpp"
URPGAbilityEventListener_OnDodgeRollFinished* URPGAbilityEventListener_OnDodgeRollFinished::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnDodgeRollFinished");
    return (URPGAbilityEventListener_OnDodgeRollFinished*)res;
}
