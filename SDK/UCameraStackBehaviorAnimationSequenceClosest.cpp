#include "UAnimSequenceBase.hpp"
#include "UCameraStackBehaviorAnimationBase.hpp"
#include "UCameraStackBehaviorAnimationSequenceClosest.hpp"
UCameraStackBehaviorAnimationSequenceClosest* UCameraStackBehaviorAnimationSequenceClosest::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAnimationSequenceClosest");
    return (UCameraStackBehaviorAnimationSequenceClosest*)res;
}
