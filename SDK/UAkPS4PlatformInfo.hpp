#pragma once
#include <cstdint>
#include "UAkPlatformInfo.hpp"
#pragma pack(push, 1)
class UAkPS4PlatformInfo : public UAkPlatformInfo {
public:
    static UAkPS4PlatformInfo* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
