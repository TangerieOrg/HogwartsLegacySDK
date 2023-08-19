#include "UAkAssetBase.hpp"
#include "UAkAssetPlatformData.hpp"
#include "UAkAudioType.hpp"
UAkAssetBase* UAkAssetBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAssetBase");
    return (UAkAssetBase*)res;
}
