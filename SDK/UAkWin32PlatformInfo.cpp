#include "UAkPlatformInfo.hpp"
#include "UAkWin32PlatformInfo.hpp"
UAkWin32PlatformInfo* UAkWin32PlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkWin32PlatformInfo");
    return (UAkWin32PlatformInfo*)res;
}
