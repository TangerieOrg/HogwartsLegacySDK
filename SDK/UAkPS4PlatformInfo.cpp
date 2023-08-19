#include "UAkPS4PlatformInfo.hpp"
#include "UAkPlatformInfo.hpp"
UAkPS4PlatformInfo* UAkPS4PlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkPS4PlatformInfo");
    return (UAkPS4PlatformInfo*)res;
}
