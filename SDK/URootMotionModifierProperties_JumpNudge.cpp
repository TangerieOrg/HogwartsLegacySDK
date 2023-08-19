#include "ECustomInterpType\Type.hpp"
#include "FVector2D.hpp"
#include "UCurveFloat.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_JumpNudge.hpp"
URootMotionModifierProperties_JumpNudge* URootMotionModifierProperties_JumpNudge::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_JumpNudge");
    return (URootMotionModifierProperties_JumpNudge*)res;
}
