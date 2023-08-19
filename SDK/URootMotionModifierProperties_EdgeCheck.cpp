#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_EdgeCheck.hpp"
URootMotionModifierProperties_EdgeCheck* URootMotionModifierProperties_EdgeCheck::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_EdgeCheck");
    return (URootMotionModifierProperties_EdgeCheck*)res;
}
