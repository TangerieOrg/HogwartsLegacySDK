#include "FPoseDataContainer.hpp"
#include "FTransform.hpp"
#include "UAnimationAsset.hpp"
#include "UPoseAsset.hpp"
UPoseAsset* UPoseAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PoseAsset");
    return (UPoseAsset*)res;
}
