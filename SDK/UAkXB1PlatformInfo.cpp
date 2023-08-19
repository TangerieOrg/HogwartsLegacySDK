#include "UAkXB1PlatformInfo.hpp"
#include "UAkXboxOneGDKPlatformInfo.hpp"
UAkXB1PlatformInfo* UAkXB1PlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkXB1PlatformInfo");
    return (UAkXB1PlatformInfo*)res;
}
