#include "URootMotionModifier.hpp"
#include "URootMotionModifier_QuadrupedSpine.hpp"
URootMotionModifier_QuadrupedSpine* URootMotionModifier_QuadrupedSpine::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_QuadrupedSpine");
    return (URootMotionModifier_QuadrupedSpine*)res;
}
