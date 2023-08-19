#include "FGameplayTagContainer.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UBaseArchitectFilter.hpp"
#include "UPoseGroupProvider.hpp"
#include "UPoseGroup_TagLookupOnAssets.hpp"
UPoseGroup_TagLookupOnAssets* UPoseGroup_TagLookupOnAssets::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.PoseGroup_TagLookupOnAssets");
    return (UPoseGroup_TagLookupOnAssets*)res;
}
