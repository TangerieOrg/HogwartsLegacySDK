#include "UAkIOSPlatformInfo.hpp"
#include "UAkPlatformInfo.hpp"
UAkIOSPlatformInfo* UAkIOSPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkIOSPlatformInfo");
    return (UAkIOSPlatformInfo*)res;
}
