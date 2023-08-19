#include "UAblTargetingBase.hpp"
#include "UAblTargetingCustom.hpp"
UAblTargetingCustom* UAblTargetingCustom::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTargetingCustom");
    return (UAblTargetingCustom*)res;
}
