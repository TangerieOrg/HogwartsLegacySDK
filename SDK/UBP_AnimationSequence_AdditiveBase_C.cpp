#include "UBP_AnimationSequence_AdditiveBase_C.hpp"
#include "UCameraStackBehaviorAnimationSequence.hpp"
UBP_AnimationSequence_AdditiveBase_C* UBP_AnimationSequence_AdditiveBase_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_AnimationSequence_AdditiveBase.BP_AnimationSequence_AdditiveBase_C");
    return (UBP_AnimationSequence_AdditiveBase_C*)res;
}
