#include "UAkPlatformInfo.hpp"
#include "UObject.hpp"
UAkPlatformInfo* UAkPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkPlatformInfo");
    return (UAkPlatformInfo*)res;
}
