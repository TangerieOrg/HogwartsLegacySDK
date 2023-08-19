#include "ECustomInterpType\Type.hpp"
#include "ERootMotionModTurnAssistMethod\Type.hpp"
#include "ERootMotionModTurnAssistUseDirection\Type.hpp"
#include "FVector2D.hpp"
#include "UCurveFloat.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_TurnAssist.hpp"
URootMotionModifierProperties_TurnAssist* URootMotionModifierProperties_TurnAssist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_TurnAssist");
    return (URootMotionModifierProperties_TurnAssist*)res;
}
