#include "UAkWin64PlatformInfo.hpp"
#include "UAkWindowsPlatformInfo.hpp"
UAkWindowsPlatformInfo* UAkWindowsPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkWindowsPlatformInfo");
    return (UAkWindowsPlatformInfo*)res;
}
