#include "UAkAudioType.hpp"
#include "UObject.hpp"
UAkAudioType* UAkAudioType::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAudioType");
    return (UAkAudioType*)res;
}
