#include "UAkAudioType.hpp"
#include "UAkRtpc.hpp"
UAkRtpc* UAkRtpc::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkRtpc");
    return (UAkRtpc*)res;
}
