#include "URootMotionModifier.hpp"
#include "URootMotionModifier_Interact.hpp"
URootMotionModifier_Interact* URootMotionModifier_Interact::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_Interact");
    return (URootMotionModifier_Interact*)res;
}
