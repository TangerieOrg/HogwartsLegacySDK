#include "URootMotionModifier.hpp"
#include "URootMotionModifier_JumpControl.hpp"
URootMotionModifier_JumpControl* URootMotionModifier_JumpControl::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_JumpControl");
    return (URootMotionModifier_JumpControl*)res;
}
