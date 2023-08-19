#include "UAkExternalMediaAsset.hpp"
#include "UAkMediaAsset.hpp"
UAkExternalMediaAsset* UAkExternalMediaAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkExternalMediaAsset");
    return (UAkExternalMediaAsset*)res;
}
