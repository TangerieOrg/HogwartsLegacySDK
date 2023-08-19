#include "UAkAudioType.hpp"
#include "UAkGroupValue.hpp"
UAkGroupValue* UAkGroupValue::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkGroupValue");
    return (UAkGroupValue*)res;
}
