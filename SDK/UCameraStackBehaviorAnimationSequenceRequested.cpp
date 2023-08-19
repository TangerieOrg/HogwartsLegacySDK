#include "UCameraStackBehaviorAnimationBase.hpp"
#include "UCameraStackBehaviorAnimationSequenceRequested.hpp"
UCameraStackBehaviorAnimationSequenceRequested* UCameraStackBehaviorAnimationSequenceRequested::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAnimationSequenceRequested");
    return (UCameraStackBehaviorAnimationSequenceRequested*)res;
}
