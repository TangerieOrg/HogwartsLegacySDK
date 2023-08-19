#include "UAvaMotionWarpingModifierConfig.hpp"
#include "UObject.hpp"
UAvaMotionWarpingModifierConfig* UAvaMotionWarpingModifierConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AvaMotionWarpingModifierConfig");
    return (UAvaMotionWarpingModifierConfig*)res;
}
