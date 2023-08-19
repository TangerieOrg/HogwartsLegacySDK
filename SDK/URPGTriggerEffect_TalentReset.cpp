#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_TalentReset.hpp"
URPGTriggerEffect_TalentReset* URPGTriggerEffect_TalentReset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_TalentReset");
    return (URPGTriggerEffect_TalentReset*)res;
}
