#include "UAkEventCallbackInfo.hpp"
#include "UAkMarkerCallbackInfo.hpp"
UAkMarkerCallbackInfo* UAkMarkerCallbackInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkMarkerCallbackInfo");
    return (UAkMarkerCallbackInfo*)res;
}
