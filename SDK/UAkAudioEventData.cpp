#include "UAkAssetDataSwitchContainer.hpp"
#include "UAkAudioEventData.hpp"
UAkAudioEventData* UAkAudioEventData::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAudioEventData");
    return (UAkAudioEventData*)res;
}
