#include "UAnimationAsset.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_PlayAnimation.hpp"
#include "UBehaviorTreeComponent.hpp"
#include "USkeletalMeshComponent.hpp"
UBTTask_PlayAnimation* UBTTask_PlayAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_PlayAnimation");
    return (UBTTask_PlayAnimation*)res;
}
