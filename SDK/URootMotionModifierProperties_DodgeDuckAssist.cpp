#include "ECustomInterpType\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_DodgeDuckAssist.hpp"
URootMotionModifierProperties_DodgeDuckAssist* URootMotionModifierProperties_DodgeDuckAssist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_DodgeDuckAssist");
    return (URootMotionModifierProperties_DodgeDuckAssist*)res;
}
