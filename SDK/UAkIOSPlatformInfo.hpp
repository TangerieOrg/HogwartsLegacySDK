#pragma once
#include <cstdint>
#include "UAkPlatformInfo.hpp"
#pragma pack(push, 1)
class UAkIOSPlatformInfo : public UAkPlatformInfo {
public:
    static UAkIOSPlatformInfo* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
