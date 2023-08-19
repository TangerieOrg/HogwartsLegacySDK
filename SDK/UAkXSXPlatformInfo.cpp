#include "UAkPlatformInfo.hpp"
#include "UAkXSXPlatformInfo.hpp"
UAkXSXPlatformInfo* UAkXSXPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkXSXPlatformInfo");
    return (UAkXSXPlatformInfo*)res;
}
