#include "UAkPlatformInfo.hpp"
#include "UAkWin64PlatformInfo.hpp"
UAkWin64PlatformInfo* UAkWin64PlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkWin64PlatformInfo");
    return (UAkWin64PlatformInfo*)res;
}
