#include "UAkAudioType.hpp"
#include "UAkTrigger.hpp"
UAkTrigger* UAkTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkTrigger");
    return (UAkTrigger*)res;
}
