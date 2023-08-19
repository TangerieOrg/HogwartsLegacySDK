#include "UAnimLayersAsset.hpp"
#include "UAnimLayersAssetUserData.hpp"
#include "UAssetUserData.hpp"
UAnimLayersAssetUserData* UAnimLayersAssetUserData::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimLayersAssetUserData");
    return (UAnimLayersAssetUserData*)res;
}
