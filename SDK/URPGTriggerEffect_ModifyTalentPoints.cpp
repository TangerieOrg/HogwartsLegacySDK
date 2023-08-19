#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_ModifyTalentPoints.hpp"
URPGTriggerEffect_ModifyTalentPoints* URPGTriggerEffect_ModifyTalentPoints::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ModifyTalentPoints");
    return (URPGTriggerEffect_ModifyTalentPoints*)res;
}
