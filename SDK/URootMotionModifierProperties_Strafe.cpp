#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_Strafe.hpp"
URootMotionModifierProperties_Strafe* URootMotionModifierProperties_Strafe::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_Strafe");
    return (URootMotionModifierProperties_Strafe*)res;
}
