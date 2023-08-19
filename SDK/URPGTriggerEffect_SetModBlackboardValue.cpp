#include "ERPGModInputTags.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_SetModBlackboardValue.hpp"
URPGTriggerEffect_SetModBlackboardValue* URPGTriggerEffect_SetModBlackboardValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_SetModBlackboardValue");
    return (URPGTriggerEffect_SetModBlackboardValue*)res;
}
