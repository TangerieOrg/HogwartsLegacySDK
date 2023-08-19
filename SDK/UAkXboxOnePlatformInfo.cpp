#include "UAkPlatformInfo.hpp"
#include "UAkXboxOnePlatformInfo.hpp"
UAkXboxOnePlatformInfo* UAkXboxOnePlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkXboxOnePlatformInfo");
    return (UAkXboxOnePlatformInfo*)res;
}
