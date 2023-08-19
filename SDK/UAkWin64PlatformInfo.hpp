#pragma once
#include <cstdint>
#include "UAkPlatformInfo.hpp"
#pragma pack(push, 1)
class UAkWin64PlatformInfo : public UAkPlatformInfo {
public:
    static UAkWin64PlatformInfo* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
