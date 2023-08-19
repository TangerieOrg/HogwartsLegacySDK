#include "URootMotionModifier.hpp"
#include "URootMotionModifier_TargetTracker.hpp"
URootMotionModifier_TargetTracker* URootMotionModifier_TargetTracker::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_TargetTracker");
    return (URootMotionModifier_TargetTracker*)res;
}
