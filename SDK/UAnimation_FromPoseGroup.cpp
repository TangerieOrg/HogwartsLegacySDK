#include "FGameplayTagContainer.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UAnimationProvider.hpp"
#include "UAnimation_FromPoseGroup.hpp"
#include "UPoseGroupProvider.hpp"
UAnimation_FromPoseGroup* UAnimation_FromPoseGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Animation_FromPoseGroup");
    return (UAnimation_FromPoseGroup*)res;
}
