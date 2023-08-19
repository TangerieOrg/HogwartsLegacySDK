#include "EMoveDirectionRule\Type.hpp"
#include "EMoveInterpRule\Type.hpp"
#include "EMoveMaxSpeedRule\Type.hpp"
#include "EMoveMinSpeedRule\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_Move.hpp"
URootMotionModifierProperties_Move* URootMotionModifierProperties_Move::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_Move");
    return (URootMotionModifierProperties_Move*)res;
}
