#include "UAnimSequenceBase.hpp"
#include "UCameraStackBehaviorAnimationBase.hpp"
#include "UCameraStackBehaviorAnimationSequence.hpp"
UCameraStackBehaviorAnimationSequence* UCameraStackBehaviorAnimationSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAnimationSequence");
    return (UCameraStackBehaviorAnimationSequence*)res;
}
