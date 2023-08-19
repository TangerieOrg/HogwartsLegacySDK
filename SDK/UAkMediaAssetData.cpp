#include "UAkMediaAssetData.hpp"
#include "UObject.hpp"
UAkMediaAssetData* UAkMediaAssetData::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkMediaAssetData");
    return (UAkMediaAssetData*)res;
}
