#include "UAkMacPlatformInfo.hpp"
#include "UAkPlatformInfo.hpp"
UAkMacPlatformInfo* UAkMacPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkMacPlatformInfo");
    return (UAkMacPlatformInfo*)res;
}
