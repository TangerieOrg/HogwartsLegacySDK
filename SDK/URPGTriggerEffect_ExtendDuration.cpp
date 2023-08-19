#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_ExtendDuration.hpp"
URPGTriggerEffect_ExtendDuration* URPGTriggerEffect_ExtendDuration::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ExtendDuration");
    return (URPGTriggerEffect_ExtendDuration*)res;
}
