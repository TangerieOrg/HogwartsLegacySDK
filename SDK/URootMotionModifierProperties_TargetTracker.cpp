#include "ECustomInterpType\Type.hpp"
#include "ERootMotionModTargetType.hpp"
#include "ETargetID\Type.hpp"
#include "FVector.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_TargetTracker.hpp"
URootMotionModifierProperties_TargetTracker* URootMotionModifierProperties_TargetTracker::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_TargetTracker");
    return (URootMotionModifierProperties_TargetTracker*)res;
}
