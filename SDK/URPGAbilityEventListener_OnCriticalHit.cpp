#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnCriticalHit.hpp"
URPGAbilityEventListener_OnCriticalHit* URPGAbilityEventListener_OnCriticalHit::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnCriticalHit");
    return (URPGAbilityEventListener_OnCriticalHit*)res;
}
