#include "UAkPS5PlatformInfo.hpp"
#include "UAkPlatformInfo.hpp"
UAkPS5PlatformInfo* UAkPS5PlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkPS5PlatformInfo");
    return (UAkPS5PlatformInfo*)res;
}
