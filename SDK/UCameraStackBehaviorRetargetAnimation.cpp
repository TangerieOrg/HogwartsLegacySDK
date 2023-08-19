#include "FVector2D.hpp"
#include "UCameraStackBehaviorAnimationBase.hpp"
#include "UCameraStackBehaviorLookAtBase.hpp"
#include "UCameraStackBehaviorRetargetAnimation.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorRetargetAnimation* UCameraStackBehaviorRetargetAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorRetargetAnimation");
    return (UCameraStackBehaviorRetargetAnimation*)res;
}
