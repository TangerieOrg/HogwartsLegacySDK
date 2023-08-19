#include "UAkLinuxPlatformInfo.hpp"
#include "UAkPlatformInfo.hpp"
UAkLinuxPlatformInfo* UAkLinuxPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkLinuxPlatformInfo");
    return (UAkLinuxPlatformInfo*)res;
}
