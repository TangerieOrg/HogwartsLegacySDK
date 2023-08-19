#include "UAkDurationCallbackInfo.hpp"
#include "UAkEventCallbackInfo.hpp"
UAkDurationCallbackInfo* UAkDurationCallbackInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkDurationCallbackInfo");
    return (UAkDurationCallbackInfo*)res;
}
