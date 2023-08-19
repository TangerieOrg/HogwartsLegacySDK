#include "UObject.hpp"
#include "URPGCondition.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGTriggerEffect_Base* URPGTriggerEffect_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_Base");
    return (URPGTriggerEffect_Base*)res;
}
