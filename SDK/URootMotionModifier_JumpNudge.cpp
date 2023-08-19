#include "URootMotionModifier.hpp"
#include "URootMotionModifier_JumpNudge.hpp"
URootMotionModifier_JumpNudge* URootMotionModifier_JumpNudge::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_JumpNudge");
    return (URootMotionModifier_JumpNudge*)res;
}
