#include "UAkLocalizedMediaAsset.hpp"
#include "UAkMediaAsset.hpp"
UAkLocalizedMediaAsset* UAkLocalizedMediaAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkLocalizedMediaAsset");
    return (UAkLocalizedMediaAsset*)res;
}
