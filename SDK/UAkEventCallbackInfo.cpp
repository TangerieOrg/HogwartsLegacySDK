#include "UAkCallbackInfo.hpp"
#include "UAkEventCallbackInfo.hpp"
UAkEventCallbackInfo* UAkEventCallbackInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkEventCallbackInfo");
    return (UAkEventCallbackInfo*)res;
}
