#include "UAkCallbackInfo.hpp"
#include "UAkComponent.hpp"
#include "UObject.hpp"
UAkCallbackInfo* UAkCallbackInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkCallbackInfo");
    return (UAkCallbackInfo*)res;
}
