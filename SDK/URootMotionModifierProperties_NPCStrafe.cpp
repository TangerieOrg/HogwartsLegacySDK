#include "FDbSingleColumnInfo.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_NPCStrafe.hpp"
URootMotionModifierProperties_NPCStrafe* URootMotionModifierProperties_NPCStrafe::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_NPCStrafe");
    return (URootMotionModifierProperties_NPCStrafe*)res;
}
