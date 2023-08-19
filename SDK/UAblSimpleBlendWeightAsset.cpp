#include "UAblBoneBlendWeightAsset.hpp"
#include "UAblSimpleBlendWeightAsset.hpp"
UAblSimpleBlendWeightAsset* UAblSimpleBlendWeightAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSimpleBlendWeightAsset");
    return (UAblSimpleBlendWeightAsset*)res;
}
