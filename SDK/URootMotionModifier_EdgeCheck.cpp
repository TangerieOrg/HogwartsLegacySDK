#include "URootMotionModifier.hpp"
#include "URootMotionModifier_EdgeCheck.hpp"
URootMotionModifier_EdgeCheck* URootMotionModifier_EdgeCheck::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_EdgeCheck");
    return (URootMotionModifier_EdgeCheck*)res;
}
