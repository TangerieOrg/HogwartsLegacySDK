#include "EInteractUseTargetTracker.hpp"
#include "ETargetID\Type.hpp"
#include "URootMotionModProperties_Interact.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_Interact.hpp"
URootMotionModifierProperties_Interact* URootMotionModifierProperties_Interact::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_Interact");
    return (URootMotionModifierProperties_Interact*)res;
}
