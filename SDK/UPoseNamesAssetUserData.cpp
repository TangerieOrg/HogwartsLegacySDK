#include "UAssetUserData.hpp"
#include "UPoseNamesAssetUserData.hpp"
UPoseNamesAssetUserData* UPoseNamesAssetUserData::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomizableCharacter.PoseNamesAssetUserData");
    return (UPoseNamesAssetUserData*)res;
}
