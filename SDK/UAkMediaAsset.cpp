#include "UAkMediaAsset.hpp"
#include "UAkMediaAssetData.hpp"
#include "UObject.hpp"
UAkMediaAsset* UAkMediaAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkMediaAsset");
    return (UAkMediaAsset*)res;
}
