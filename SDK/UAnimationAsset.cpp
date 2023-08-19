#include "UAnimMetaData.hpp"
#include "UAnimationAsset.hpp"
#include "UAssetUserData.hpp"
#include "UObject.hpp"
#include "USkeleton.hpp"
UAnimationAsset* UAnimationAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimationAsset");
    return (UAnimationAsset*)res;
}
