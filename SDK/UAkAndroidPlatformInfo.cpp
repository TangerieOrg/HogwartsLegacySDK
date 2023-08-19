#include "UAkAndroidPlatformInfo.hpp"
#include "UAkPlatformInfo.hpp"
UAkAndroidPlatformInfo* UAkAndroidPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAndroidPlatformInfo");
    return (UAkAndroidPlatformInfo*)res;
}
