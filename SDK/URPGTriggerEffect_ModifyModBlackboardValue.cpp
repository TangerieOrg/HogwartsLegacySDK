#include "ERPGModInputTags.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_ModifyModBlackboardValue.hpp"
URPGTriggerEffect_ModifyModBlackboardValue* URPGTriggerEffect_ModifyModBlackboardValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ModifyModBlackboardValue");
    return (URPGTriggerEffect_ModifyModBlackboardValue*)res;
}
