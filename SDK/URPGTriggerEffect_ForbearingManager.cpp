#include "URPGTriggerEffect_ForbearingManager.hpp"
#include "URPGTriggerEffect_RecoverFromDamage.hpp"
URPGTriggerEffect_ForbearingManager* URPGTriggerEffect_ForbearingManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ForbearingManager");
    return (URPGTriggerEffect_ForbearingManager*)res;
}
