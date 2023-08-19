#include "URootMotionModifier.hpp"
#include "URootMotionModifier_NPCStrafe.hpp"
URootMotionModifier_NPCStrafe* URootMotionModifier_NPCStrafe::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_NPCStrafe");
    return (URootMotionModifier_NPCStrafe*)res;
}
