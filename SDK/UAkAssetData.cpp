#include "UAkAssetData.hpp"
#include "UObject.hpp"
UAkAssetData* UAkAssetData::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAssetData");
    return (UAkAssetData*)res;
}
