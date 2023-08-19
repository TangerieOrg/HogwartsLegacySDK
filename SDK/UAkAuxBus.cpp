#include "UAkAssetBase.hpp"
#include "UAkAudioBank.hpp"
#include "UAkAuxBus.hpp"
UAkAuxBus* UAkAuxBus::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAuxBus");
    return (UAkAuxBus*)res;
}
