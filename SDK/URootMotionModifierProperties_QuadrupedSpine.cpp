#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_QuadrupedSpine.hpp"
URootMotionModifierProperties_QuadrupedSpine* URootMotionModifierProperties_QuadrupedSpine::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_QuadrupedSpine");
    return (URootMotionModifierProperties_QuadrupedSpine*)res;
}
