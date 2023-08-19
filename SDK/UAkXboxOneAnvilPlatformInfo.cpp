#include "UAkXboxOneAnvilPlatformInfo.hpp"
#include "UAkXboxOneGDKPlatformInfo.hpp"
UAkXboxOneAnvilPlatformInfo* UAkXboxOneAnvilPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkXboxOneAnvilPlatformInfo");
    return (UAkXboxOneAnvilPlatformInfo*)res;
}
