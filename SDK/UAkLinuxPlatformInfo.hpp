#pragma once
#include <cstdint>
#include "UAkPlatformInfo.hpp"
#pragma pack(push, 1)
class UAkLinuxPlatformInfo : public UAkPlatformInfo {
public:
    static UAkLinuxPlatformInfo* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
