#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_ResetAchievement.hpp"
URPGTriggerEffect_ResetAchievement* URPGTriggerEffect_ResetAchievement::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ResetAchievement");
    return (URPGTriggerEffect_ResetAchievement*)res;
}
