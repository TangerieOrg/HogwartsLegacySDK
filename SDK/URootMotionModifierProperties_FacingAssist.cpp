#include "ECustomInterpType\Type.hpp"
#include "ERootMotionModTurnAssistUseDirection\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_FacingAssist.hpp"
URootMotionModifierProperties_FacingAssist* URootMotionModifierProperties_FacingAssist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_FacingAssist");
    return (URootMotionModifierProperties_FacingAssist*)res;
}
