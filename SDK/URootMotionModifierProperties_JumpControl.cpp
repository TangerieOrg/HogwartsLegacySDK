#include "EJumpControlType.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_JumpControl.hpp"
URootMotionModifierProperties_JumpControl* URootMotionModifierProperties_JumpControl::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_JumpControl");
    return (URootMotionModifierProperties_JumpControl*)res;
}
