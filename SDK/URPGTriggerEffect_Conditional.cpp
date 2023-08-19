#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_Conditional.hpp"
URPGTriggerEffect_Conditional* URPGTriggerEffect_Conditional::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_Conditional");
    return (URPGTriggerEffect_Conditional*)res;
}
