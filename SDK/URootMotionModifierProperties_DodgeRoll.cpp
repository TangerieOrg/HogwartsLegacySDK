#include "ECustomInterpType\Type.hpp"
#include "UCurveFloat.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_DodgeRoll.hpp"
URootMotionModifierProperties_DodgeRoll* URootMotionModifierProperties_DodgeRoll::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_DodgeRoll");
    return (URootMotionModifierProperties_DodgeRoll*)res;
}
