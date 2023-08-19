#include "URootMotionModifier.hpp"
#include "URootMotionModifierUltimate.hpp"
URootMotionModifierUltimate* URootMotionModifierUltimate::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.RootMotionModifierUltimate");
    return (URootMotionModifierUltimate*)res;
}
