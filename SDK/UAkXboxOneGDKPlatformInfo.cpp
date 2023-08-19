#include "UAkPlatformInfo.hpp"
#include "UAkXboxOneGDKPlatformInfo.hpp"
UAkXboxOneGDKPlatformInfo* UAkXboxOneGDKPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkXboxOneGDKPlatformInfo");
    return (UAkXboxOneGDKPlatformInfo*)res;
}
