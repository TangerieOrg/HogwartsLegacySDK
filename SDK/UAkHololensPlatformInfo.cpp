#include "UAkHololensPlatformInfo.hpp"
#include "UAkPlatformInfo.hpp"
UAkHololensPlatformInfo* UAkHololensPlatformInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkHololensPlatformInfo");
    return (UAkHololensPlatformInfo*)res;
}
