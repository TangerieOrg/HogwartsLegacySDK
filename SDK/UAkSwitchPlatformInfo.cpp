#include "UAkPlatformInfo.hpp"
#include "UAkSwitchPlatformInfo.hpp"
UAkSwitchPlatformInfo* UAkSwitchPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkSwitchPlatformInfo");
    return (UAkSwitchPlatformInfo*)res;
}
