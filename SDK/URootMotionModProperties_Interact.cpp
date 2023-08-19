#include "ECustomInterpType\Type.hpp"
#include "EInteractOffsetRules.hpp"
#include "EInteractTurnToFaceRules.hpp"
#include "EInteractUseTargetAxis.hpp"
#include "UObject.hpp"
#include "URootMotionModProperties_Interact.hpp"
URootMotionModProperties_Interact* URootMotionModProperties_Interact::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModProperties_Interact");
    return (URootMotionModProperties_Interact*)res;
}
