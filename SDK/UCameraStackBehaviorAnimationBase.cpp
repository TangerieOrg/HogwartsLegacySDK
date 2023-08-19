#include "ECameraStackAnimationFrame.hpp"
#include "ECameraStackAnimationLoopMode.hpp"
#include "FCameraOptionName.hpp"
#include "FCameraStackAnimData.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimSequenceBase.hpp"
#include "UCameraStackBehaviorAnimationBase.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorAnimationBase* UCameraStackBehaviorAnimationBase::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAnimationBase");
    return (UCameraStackBehaviorAnimationBase*)res;
}
