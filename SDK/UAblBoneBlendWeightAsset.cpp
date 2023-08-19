#include "FGuid.hpp"
#include "FPerBoneBlendWeight.hpp"
#include "UAblBoneBlendWeightAsset.hpp"
#include "UDataAsset.hpp"
#include "USkeleton.hpp"
UAblBoneBlendWeightAsset* UAblBoneBlendWeightAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBoneBlendWeightAsset");
    return (UAblBoneBlendWeightAsset*)res;
}
