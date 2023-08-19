#include "UAkPlatformInfo.hpp"
#include "UAkTVOSPlatformInfo.hpp"
UAkTVOSPlatformInfo* UAkTVOSPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkTVOSPlatformInfo");
    return (UAkTVOSPlatformInfo*)res;
}
