#include "UAkAssetBase.hpp"
#include "UAkAssetPlatformData.hpp"
#include "UAkAudioBank.hpp"
UAkAudioBank* UAkAudioBank::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAudioBank");
    return (UAkAudioBank*)res;
}
