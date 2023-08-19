#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_FallingAssist.hpp"
URootMotionModifierProperties_FallingAssist* URootMotionModifierProperties_FallingAssist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_FallingAssist");
    return (URootMotionModifierProperties_FallingAssist*)res;
}
