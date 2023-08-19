#include "UAkAssetData.hpp"
#include "UAkAssetPlatformData.hpp"
#include "UObject.hpp"
UAkAssetPlatformData* UAkAssetPlatformData::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAssetPlatformData");
    return (UAkAssetPlatformData*)res;
}
