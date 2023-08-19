#include "UAkAssetData.hpp"
#include "UAkAssetDataWithMedia.hpp"
#include "UAkMediaAsset.hpp"
UAkAssetDataWithMedia* UAkAssetDataWithMedia::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAssetDataWithMedia");
    return (UAkAssetDataWithMedia*)res;
}
