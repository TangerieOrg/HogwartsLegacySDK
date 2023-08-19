#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_Weakness.hpp"
URPGTriggerEffect_Weakness* URPGTriggerEffect_Weakness::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_Weakness");
    return (URPGTriggerEffect_Weakness*)res;
}
